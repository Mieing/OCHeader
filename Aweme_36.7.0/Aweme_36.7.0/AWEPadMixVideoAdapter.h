@class NSString;

@interface AWEPadMixVideoAdapter : NSObject <AWEPadMixVideoAdapter, UIGestureRecognizerDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } startContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (BOOL)Enable;

- (id)aAWEPadSplitScreenAdapter;
- (void)performViewDidLoad;
- (void)performShowPanelAnimation:(BOOL)a0;
- (void)updateSelectMixVideoIfNeeded:(id /* block */)a0;
- (BOOL)shouldUpdateLocatedStatusAfterReloadWithReferString:(id)a0;
- (BOOL)isMixVideoSplitStyle;
- (BOOL)autoScrollToNextVideoWhenShowingPanel;
- (id)closePanelAnimateExtraParams;
- (void)performPadCellWillDisplay:(id /* block */)a0;
- (void)adjustTableViewContentOffsetBeforeReload:(id /* block */)a0 referString:(id)a1;
- (void)adjustTableViewContentOffsetWhenTransition:(id /* block */)a0 referString:(id)a1;
- (void)updateDetailTableViewLogExtra:(id /* block */)a0 referString:(id)a1;
- (void)panelLoadWhenScrollToLocated:(id /* block */)a0 referString:(id)a1;
- (void)panelListViewDealSelectVideo:(id /* block */)a0 referString:(id)a1;
- (BOOL)enablePadCustomShouldPlayIfIsFullScreenChildVC;
- (BOOL)closePanelWhenDidSelectedWithIsSameEpisode:(BOOL)a0;
- (BOOL)detailTableLimitedScrollOffsetYSwitch;
- (BOOL)detailTablePadCustomShouldPlayIfIsFullScreenChildVC;
- (id)weakTarget;

@end
