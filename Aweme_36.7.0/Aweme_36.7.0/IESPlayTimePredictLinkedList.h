@class IESPlayTimePredictLinkedNode;

@interface IESPlayTimePredictLinkedList : NSObject

@property (nonatomic) long long limitCount;
@property (nonatomic) long long currentCount;
@property (retain, nonatomic) IESPlayTimePredictLinkedNode *headNode;
@property (retain, nonatomic) IESPlayTimePredictLinkedNode *tailNode;

+ (id)linkedListWithCount:(long long)a0;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)allItems;

@end
