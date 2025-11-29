@class NSArray, HTSLiveMessageListNode;

@interface IESLiveMessageListNodeCommit : NSObject

@property (copy, nonatomic) NSArray *refreshNodes;
@property (retain, nonatomic) HTSLiveMessageListNode *foldNode;
@property (copy, nonatomic) NSArray *needDeleteMessageIds;

- (void).cxx_destruct;

@end
