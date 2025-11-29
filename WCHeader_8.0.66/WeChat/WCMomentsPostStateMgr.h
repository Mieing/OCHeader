@class NSMutableSet;

@interface WCMomentsPostStateMgr : NSObject

@property (retain, nonatomic) NSMutableSet *postTipsViewSet;

- (long long)postTipsViewTypeWithDataItem:(id)a0;
- (void)updatePostTipsViewStateWithPostedItem:(id)a0 localItem:(id)a1;
- (void)addToPostTipsViewSet:(id)a0;
- (void)removeFromPostTipsViewSet:(id)a0;
- (void).cxx_destruct;

@end
