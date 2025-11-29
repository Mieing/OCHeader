@class NSArray, IESLiveRightBottomMutuallyExclusiveItem, NSMutableArray;
@protocol IESLiveContainerKitAdapter;

@interface IESLiveRightBottomManager : NSObject

@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *currentItem;
@property (retain, nonatomic) NSMutableArray *waitQueue;
@property (retain, nonatomic) id<IESLiveContainerKitAdapter> containerKitAdapter;
@property (nonatomic) BOOL hideStatus;
@property (retain, nonatomic) NSArray *cleanModeAllowList;
@property (nonatomic) BOOL inCleanMode;

- (void)didSetAttachingDIContext;
- (void)hideRightBottomViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (void)showRightBottomViewWithItem:(id)a0 processResult:(id /* block */)a1;
- (BOOL)isExplainCardShowing;
- (void)showComponentsIfNeed;
- (void)hideComponentsIfNeed;
- (void)showNextItem;
- (void)hideCurrentItem;
- (void)cleanContainer:(long long)a0;
- (void)trackShow:(id)a0;
- (void)logWithName:(id)a0 item:(id)a1;
- (BOOL)isItemValid:(id)a0;
- (BOOL)couldShowItem:(id)a0;
- (void)appendWaitQueue:(id)a0;
- (void)showRightBottomView:(id)a0;
- (BOOL)waitQueueContainsIdentifier:(id)a0;
- (void)removeQueueItemByIdentifier:(id)a0;
- (void)hideRightBottomView:(id)a0 completion:(id /* block */)a1;
- (void)showRightBottomViewCleanAnimation:(long long)a0 completion:(id /* block */)a1;
- (void)trackCommonCardShow:(id)a0;
- (void)showRightBottomViewShowAnimation:(id)a0;
- (void)checkIfCleanMode;
- (void)cleanContainer:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;

@end
