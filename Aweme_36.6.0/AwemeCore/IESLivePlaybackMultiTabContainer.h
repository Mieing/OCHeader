@class NSArray, IESLiveMultiTabView, NSString, UIView, NSMutableArray;

@interface IESLivePlaybackMultiTabContainer : NSObject <IESLiveMultiTabViewDelegate, IESLivePlaybackMultiTabService, IESVSVideoPlayAction>

@property (retain, nonatomic) UIView *multiTabContainerView;
@property (copy, nonatomic) NSArray *tabModels;
@property (retain, nonatomic) NSMutableArray *landscapeTabModels;
@property (retain, nonatomic) IESLiveMultiTabView *multiTabView;
@property (retain, nonatomic) id trackContext;
@property (nonatomic) long long portaitSelectIndex;
@property (nonatomic) double tabTitleRightMargin;
@property (nonatomic) BOOL mainTabShow;
@property (nonatomic) long long multiTabIndex;
@property (nonatomic) double startTimestampForTab;
@property (copy, nonatomic) id /* block */ multiTabDidScrollBlock;
@property (copy, nonatomic) id /* block */ multiTabDidScrollTabIdBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithDIContext:(id)a0 trackContext:(id)a1;
- (BOOL)hasMultiTab;
- (long long)idOfMultiTab;
- (long long)indexOfMultiTab;
- (id)titleOfMultiTab;
- (id)identifierOfMultiTab;
- (void)multiTabViewDidScrollToTabId:(long long)a0;
- (void)multiTabViewDidScroll:(id)a0;
- (void)multiTabBubbleAction:(id)a0 didAppear:(BOOL)a1 actionType:(id)a2;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)trackBubbleWithModel:(id)a0 didAppear:(BOOL)a1 actionType:(id)a2;
- (void)trackAllEntranceShowForPortrait;
- (void)moveMainTabToPositionX:(double)a0;
- (void)updateMultiTabLayoutWithPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)resizeMultiTabTitleLayout:(id)a0;
- (void)trakerTabShow;
- (void)trakerTabDuration:(long long)a0;
- (void)updateMultiTabTitleLayout;
- (void)updateTabBackground;
- (void)setupPlaybackMultiTabContainer;
- (void)loadDataSource:(id)a0 selectedIndex:(long long)a1;
- (void)hiddenMultiTab:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
