@class NSArray, AWEBinding, UIViewController;
@protocol AWEUserProfileTabBaseMethod, AWEProfileCustomScrollToTopProtocol;

@interface AWEProfileScrollToTopComponent : AWEBaseController

@property (nonatomic) BOOL hasShownPopover;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) AWEBinding *contentOffsetBinding;
@property (nonatomic) double scrollTopButtonThreshold;
@property (retain, nonatomic) NSArray *whiteTabTypeList;
@property (retain, nonatomic) NSArray *whiteTabTypeSubList;
@property (retain, nonatomic) UIViewController<AWEUserProfileTabBaseMethod, AWEProfileCustomScrollToTopProtocol> *selectedViewController;

- (id)trackCommonParams;
- (void)onDidSelectTabListIndex:(long long)a0 actionType:(unsigned long long)a1 hasRedDotWhenSwitched:(BOOL)a2 needTrack:(BOOL)a3;
- (id)scrollTopItemController;
- (void)showScrollToTopBubbleIfNeeded;
- (void)scrollTopButtonTrack:(id)a0;
- (void)scrollToTopButtonWith:(BOOL)a0;
- (void)scrollToTop;
- (void).cxx_destruct;
- (void)onInit;

@end
