@class NSString, UIImageView, AWEAdTagView, UIButton;

@interface AWEGeneralWaterfallAdImageSetCellController : AWEGeneralWaterfallBaseCellController <AWESearchImageSetViewDelegate, AWESearchRichAlbumTransitionOuterContextProvider>

@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) UIButton *adLearnMoreButton;
@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) UIImageView *linkIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;

- (void)didPlayError:(id)a0;
- (void)trackShow;
- (id)createPlayerView;
- (void)didClickAdContentDesc;
- (void)didStartShowing;
- (void)didRecallResource;
- (void)didItemChangeAtIndex:(long long)a0;
- (void)onTapAvatar:(id)a0;
- (void)onTapNickname:(id)a0;
- (void)onTapDesc:(id)a0;
- (void)updatePlayerScaleMode;
- (void)showNativeAdLearnMoreButton:(id)a0;
- (void)gotoADAlbumDetail;
- (void)cardSingleTapped:(id)a0;
- (void)gotoADAlbumRichAwemeFullPageVC;
- (void)trackSearchResultClickWithButtonType:(id)a0;
- (void)searchADAlbumAdTextClickWithLabel:(id)a0 refer:(id)a1;
- (id)getTrackBaseParams;
- (void)didClickAdComponent;
- (void)trackAdClickWithlabel:(id)a0 refer:(id)a1;
- (void)onTapNativeAdLearnMoreButton:(id)a0;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)didEnd;
- (id)navigationController;
- (id)videoView;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)setupUI;
- (id)activeView;
- (void)updateWithModel:(id)a0;

@end
