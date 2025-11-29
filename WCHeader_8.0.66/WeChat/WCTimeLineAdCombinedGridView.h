@class UIView, WCAdFinderLivePlayerView, NSString, WCAdLiveDisplayView, WCSightView, WCImageView, UIButton, WCAdFinderLiveLogic, WCAdLiveLikeAnimationView;

@interface WCTimeLineAdCombinedGridView : WCContentItemBaseView <WCImageViewDelegate>

@property (retain, nonatomic) UIView *mainMediaHolder;
@property (retain, nonatomic) WCSightView *mainSightView;
@property (retain, nonatomic) WCImageView *mainImageView;
@property (retain, nonatomic) UIButton *mainTouchButton;
@property (retain, nonatomic) UIView *gridView;
@property (nonatomic) unsigned int liveStatus;
@property (retain, nonatomic) WCAdLiveDisplayView *liveDisplayView;
@property (retain, nonatomic) WCAdLiveLikeAnimationView *liveLikeAnimationView;
@property (retain, nonatomic) WCAdFinderLivePlayerView *finderLivePlayerView;
@property (retain, nonatomic) WCAdFinderLiveLogic *finderLiveLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForDataItem:(id)a0;
+ (double)heightForGridViewForDataItem:(id)a0;
+ (id)fetchAnimationViewForView:(id)a0 isFromTimeline:(BOOL)a1 dataItem:(id)a2;
+ (BOOL)isBigMode:(id)a0;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)addMediaViewForItem:(id)a0;
- (void)addImageViewWithMediaItem:(id)a0;
- (void)addSightViewWithMediaItem:(id)a0;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (void)contentItemBecomeInvisible;
- (id)createSightView:(id)a0;
- (void)appendGridItemsToView:(id)a0;
- (id)generateImageViewForMediaItem:(id)a0;
- (void)appendActionIconToView:(id)a0 clickActionInfo:(id)a1 isMain:(BOOL)a2;
- (void)onClickMainButton:(id)a0 forEvent:(id)a1;
- (void)onCombinedGridClickedIsMainItem:(BOOL)a0 index:(long long)a1 clickedView:(id)a2;
- (void)onClickWCImage:(id)a0;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)initLiveInfoView:(id)a0;
- (id)createLiveLikeAnimationView;
- (void)updateLiveStatus:(int)a0;
- (void)tryStartLiveLikeAnimation;
- (void)stopLiveLikeAnimation;
- (id)createFinderLivePlayer:(id)a0;
- (void)addFinderLivePlayer:(id)a0;
- (void).cxx_destruct;

@end
