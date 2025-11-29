@protocol AWESearchHomePageOperateCardManagerDelegate;

@interface AWESearchHomePageOperateCardManager : NSObject

@property (weak, nonatomic) id<AWESearchHomePageOperateCardManagerDelegate> delegate;

+ (id)generateNodeWithConfig:(id /* block */)a0;
+ (BOOL)isRootChildren:(id)a0 root:(id)a1;
+ (id)findAncestorCardBeforeRoot:(id)a0 root:(id)a1;
+ (id)rightBrothers:(id)a0;

- (void)removeCardOperation:(id)a0;
- (void)insertCardOperation:(id)a0;
- (void)insertCardAction:(id)a0;
- (long long)findSpliteIndex:(id)a0;
- (id)splitTreeNodeChildrenArr:(id)a0;
- (id)generateSplitTreeNode:(id)a0;
- (void)removeCardOperation:(id)a0 isOnScreen:(BOOL)a1;
- (void)removeCardAction:(id)a0;
- (void)removeCardAction:(id)a0 isOnScreen:(BOOL)a1;
- (void)insertCardOperationV2:(id)a0;
- (void)createSequenceCardOperations:(id)a0;
- (void).cxx_destruct;

@end
