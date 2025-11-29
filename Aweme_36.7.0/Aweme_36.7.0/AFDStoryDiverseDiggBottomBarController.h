@class AFDStoryDiverseDiggBottomBarViewModel, AFDStoryDiverseDiggBottomBarView, NSString, AWEBinding;
@protocol AFDStoryDiverseDiggBottomBarContextProtocol;

@interface AFDStoryDiverseDiggBottomBarController : NSObject <AFDStoryDiverseDiggBottomBarViewDelegate, AFDStoryDiverseDiggBottomBarNormalLikeDelegate, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) id<AFDStoryDiverseDiggBottomBarContextProtocol> context;
@property (retain, nonatomic) AFDStoryDiverseDiggBottomBarView *contentView;
@property (retain, nonatomic) AFDStoryDiverseDiggBottomBarViewModel *viewModel;
@property (retain, nonatomic) AWEBinding *videoControllerBind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)cellDidEndDisplay:(id)a0 forRowAtIndexPath:(long long)a1;
- (void)scrollViewWillBeginDragging;
- (void)awemeDiggNotification:(id)a0;
- (id)buildDiverseDiggContextWithModel:(id)a0;
- (void)bindVideoContext;
- (BOOL)isClickEventDisable;
- (id)normalLikeCell;
- (void)didShowFastReplyInputView;
- (void)didShowDiverseDiggWithModel:(id)a0;
- (void)didClickShareBtnWithModel:(id)a0;
- (void)didClickFastReplyWithModel:(id)a0;
- (void)didClickDiverseDiggWithModel:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (void)didClickNormalLikeBtnWithCell:(id)a0;
- (BOOL)canShowDiverseDiggPopover:(id)a0;
- (void).cxx_destruct;
- (id)animationController;
- (void)applicationDidEnterBackground;
- (id)init;
- (id)interactionController;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;

@end
