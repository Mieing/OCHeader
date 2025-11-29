@class QMapLinkNode;

@interface QMapLinkList : NSObject

@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long cost;
@property (retain, nonatomic) QMapLinkNode *head;
@property (retain, nonatomic) QMapLinkNode *trail;

- (void)addFirst:(id)a0;
- (void)addLast:(id)a0;
- (void)remove:(id)a0;
- (id)removeLast;
- (void)removeAllObjects;
- (void).cxx_destruct;

@end
