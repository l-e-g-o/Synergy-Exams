// Тесты для очереди
class QueueTest : public ::testing::Test {
    protected:
        Queue queue;
        
        virtual void SetUp() {
            // Инициализация перед каждым тестом
        }
        
        virtual void TearDown() {
            // Очистка после каждого теста
        }
    };
    
    TEST_F(QueueTest, TestPushPop) {
        queue.push(1);
        queue.push(2);
        EXPECT_EQ(queue.pop(), 1);
        EXPECT_EQ(queue.pop(), 2);
    }
    
    TEST_F(QueueTest, TestEmptyQueue) {
        EXPECT_THROW(queue.pop(), std::out_of_range);
    }
    
    // Тесты для кучи
    class HeapTest : public ::testing::Test {
    protected:
        Heap heap;
        
        virtual void SetUp() {
            // Инициализация перед каждым тестом
        }
        
        virtual void TearDown() {
            // Очистка после каждого теста
        }
    };
    
    TEST_F(HeapTest, TestPushPop) {
        heap.push(5);
        heap.push(3);
        heap.push(8);
        EXPECT_EQ(heap.pop(), 8);
        EXPECT_EQ(heap.pop(), 5);
        EXPECT_EQ(heap.pop(), 3);
    }
    
    TEST_F(HeapTest, TestEmptyHeap) {
        EXPECT_THROW(heap.pop(), std::out_of_range);
    }
    
    // Тесты для бинарного дерева
    class BinaryTreeTest : public ::testing::Test {
    protected:
        BinaryTree tree;
        
        virtual void SetUp() {
            // Инициализация перед каждым тестом
        }
        
        virtual void TearDown() {
            // Очистка после каждого теста
        }
    };
    
    TEST_F(BinaryTreeTest, TestInsertSearch) {
        tree.push(10);
        tree.push(5);
        tree.push(15);
        EXPECT_TRUE(tree.search(10));
        EXPECT_TRUE(tree.search(5));
        EXPECT_TRUE(tree.search(15));
    }
    
    TEST_F(BinaryTreeTest, TestDelete) {
        tree.push(20);
        tree.push(10);
        tree.push(30);
        tree.pop(10);
        EXPECT_FALSE(tree.search(10));
        EXPECT_TRUE(tree.search(20));
        EXPECT_TRUE(tree.search(30));
    }
    
    TEST_F(BinaryTreeTest, TestEmptyTree) {
        EXPECT_FALSE(tree.search(42));
        EXPECT_THROW(tree.pop(42), std::out_of_range);
    }
    
    // Макрос для регистрации тестов
    int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
    }
    