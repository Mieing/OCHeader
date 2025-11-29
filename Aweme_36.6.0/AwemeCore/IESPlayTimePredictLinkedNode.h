@interface IESPlayTimePredictLinkedNode : NSObject

@property (retain, nonatomic) id item;
@property (weak, nonatomic) IESPlayTimePredictLinkedNode *preNode;
@property (retain, nonatomic) IESPlayTimePredictLinkedNode *nextNode;

- (void).cxx_destruct;

@end
