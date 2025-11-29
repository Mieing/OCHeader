@class AWEGeneralWaterfallVideoTag, NSString, AWEFeedVideoTagView, UIView, AWEAdTagView, UIButton;
@protocol AWEAdLearnMoreLynxButton;

@interface AWEGeneralWaterfallVideoCellController : AWEGeneralWaterfallBaseCellController <AWESearchVideoViewPlayerDelegate>

@property (retain, nonatomic) AWEAdTagView *adTagView;
@property (retain, nonatomic) UIView<AWEAdLearnMoreLynxButton> *adLearnMoreLynxButton;
@property (nonatomic) BOOL lynxButtonLoadFail;
@property (nonatomic) double lastLynxButtonHeight;
@property (retain, nonatomic) UIButton *adLearnMoreButton;
@property (nonatomic) BOOL videoClipFinish;
@property (weak, nonatomic) AWEFeedVideoTagView *videoLeftTopTag;
@property (retain, nonatomic) AWEGeneralWaterfallVideoTag *ugcShowcaseTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)supportLynxButton:(id)a0;
+ (BOOL)enableCoverSuperResolution;
+ (id)multiColumnCardTagConfig;
+ (BOOL)isLearnMoreButtonUseLynx;

- (id)logExtraDict;
- (void)didPlayError:(id)a0;
- (BOOL)shouldShowAdLearnMoreLynxButton:(id)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)trackShow;
- (id)createPlayerView;
- (void)trackClick;
- (BOOL)shouldNotActive;
- (void)didEndShowing;
- (void)didStartShowing;
- (void)resetForTransition;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)resetShouldActiveStatus;
- (void)setUpLearnMoreLynxButtonWithModel:(id)a0;
- (id)appendLynxRawAdDataWithSearchCommonParams:(id)a0;
- (id)getGeneralSearchTrackBaseParamsWith:(id)a0;
- (id)createCoverView;
- (id)getInflowExtra;
- (id)shouldNotBeBlockedView;
- (void)resetAdComponentWithModelIfNeeded:(id)a0;
- (BOOL)isUgcShowcase;
- (void)showNativeAdLearnMoreButton:(id)a0;
- (void)cardSingleTapped:(id)a0;
- (id)getTrackBaseParams;
- (void)onTapNativeAdLearnMoreButton:(id)a0;
- (BOOL)isUseStaticCardCoverWithModel:(id)a0;
- (id)getBTMInfoDictWithArea:(id)a0;
- (id)getSourceBtmTokenWithDict:(id)a0 area:(id)a1;
- (long long)prefetchImageCount;
- (BOOL)enableHigligtAbility;
- (BOOL)isCountNewStyle;
- (id)countNewStyleFormatTimeString;
- (void)showVideoLeftTopTagWith:(id)a0;
- (BOOL)allowShowOtherTag;
- (void)showLynxButtonWithModel:(id)a0;
- (void)didLynxButtonLoadFailed;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)didEnd;
- (id)videoView;
- (BOOL)hasVideo;
- (void)didResignActive;
- (void)setupUI;
- (id)activeView;
- (id)coverImage;
- (void)updateWithModel:(id)a0;

@end
