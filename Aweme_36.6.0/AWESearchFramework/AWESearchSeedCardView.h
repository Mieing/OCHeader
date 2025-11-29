@class AWESearchSeedImageTextContentView, AWESearchSeedCardContentView, NSString, AWESearchSeedCardModel, AWESearchCachalotResultContext, AWESearchTracker;
@protocol AWEModernFeedCellContext;

@interface AWESearchSeedCardView : AWESearchCachalotBaseCardView <AWESearchSeedImageTextContentViewDelegate, AWESearchSeedCardContentViewDelegate, AWEZoomTransitionOuterContextProvider>

@property (retain, nonatomic) AWESearchSeedImageTextContentView *contentView;
@property (retain, nonatomic) AWESearchSeedCardContentView *content;
@property (retain, nonatomic) AWESearchSeedCardModel *model;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)awe_themeWillChange:(long long)a0;
- (void)trackShow;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)digg;
- (void)configNewUI;
- (void)updateSectionIndex:(long long)a0;
- (void)configAlbumDetailPageLoopAndSoundStateForPayload:(id)a0;
- (void)trackEnterFeed;
- (void)trackDigg;
- (void)trackCancelDigg;
- (double)getRealScreenWidth;
- (void)cancelDigg;
- (void)gotoAlbumDetailPageWithParams:(id)a0 model:(id)a1;
- (id)btmDcmInfoForWholeCard:(BOOL)a0;
- (void)trackClickPersonLink:(id)a0;
- (void)trackClickChallengeLink;
- (void)clickPersonLink:(id)a0;
- (void)clickChallengeLink;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)handleLongPressGesture:(id)a0;
- (void)updateWithViewModel:(id)a0;

@end
