#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace ariel
{

    template <class T>
    class BinaryTree
    {

        struct Node
        {
            T data;
            Node *left = nullptr;
            Node *right = nullptr;
            Node(T info) : data(info), left(nullptr), right(nullptr) {}
        };

        Node *root = nullptr;

    public:
        BinaryTree<T>() {}

        BinaryTree<T> &add_root(const T &data)
        {
            return *this;
        }

        BinaryTree<T> &add_left(const T &daddy, const T &son)
        {
            return *this;
        }

        BinaryTree<T> &add_right(const T &daddy, const T &son)
        {
            return *this;
        }

        class iterator
        {

        private:
            int Order;
            Node *p;

        public:
            iterator(int order, Node *ptr = nullptr) : p(ptr), Order(order)
            {
            }

            T &operator*() const
            {
                return p->data;
            }

            T *operator->() const
            {
                return &(p->data);
            }

            iterator &operator++()
            {
                return *this;
            }

            const iterator operator++(int)
            {
                return *this;
            }

            bool operator==(const iterator &other) const
            {
                return true;
            }

            bool operator!=(const iterator &other) const
            {
                return true;
            }
        };

        iterator begin_preorder()
        {
            return iterator(0, root);
        }
        iterator end_preorder()
        {
            return iterator(0);
        }
        iterator begin_inorder()
        {
            return iterator(1, root);
        }
        iterator end_inorder()
        {
            return iterator(1);
        }
        iterator begin_postorder()
        {
            return iterator(2, root);
        }
        iterator end_postorder()
        {
            return iterator(2);
        }
        iterator begin()
        {
            return iterator(1, root);
        }
        iterator end()
        {
            return iterator(1);
        }

        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &bt)
        {
            os << "wait fot it";
            return os;
        }
    };
}
