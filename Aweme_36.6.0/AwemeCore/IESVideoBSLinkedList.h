@class IESVideoBSObjectPool, IESVideoBSLinkedNode;

@interface IESVideoBSLinkedList : NSObject

@property (retain, nonatomic) IESVideoBSLinkedNode *head;
@property (retain, nonatomic) IESVideoBSLinkedNode *tail;
@property (retain, nonatomic) IESVideoBSObjectPool *pool;
@property (nonatomic) unsigned long long length;

- (id)getHeadObject;
- (id)getTailObject;
- (void).cxx_destruct;
- (id)description;
- (id)dequeueObject;
- (id)init;
- (id)getAllObjects;
- (void)enqueueObject:(id)a0;

@end
