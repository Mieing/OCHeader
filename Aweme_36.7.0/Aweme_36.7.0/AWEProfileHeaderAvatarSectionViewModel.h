@class NSString, AWEProfileHeaderContext, NSNumber;
@protocol AFDColorRingFacadeProtocol;

@interface AWEProfileHeaderAvatarSectionViewModel : AWEBaseListSectionViewModel <AWELiveVideoFeedUpdateMessage, AWEStory25DraftMessage, AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderAvatarSectionProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL enableNoCheckFirstTime;
@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (readonly, copy, nonatomic) NSString *vsSchema;
@property (copy, nonatomic) NSString *avatarAccessibilityLabel;
@property (copy, nonatomic) NSString *liveHomePageRefer;
@property (copy, nonatomic) NSNumber *currentRoomId;
@property (readonly, nonatomic) double footerHeight;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (nonatomic) BOOL needShowColorRingPublishAnimation;
@property (nonatomic) BOOL shouldBlockRingUpdateDuringPublishing;
@property (nonatomic) long long colorRingStatus;
@property (nonatomic) BOOL storyRingDataAvailableTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canEnterLiveRoomWithContext:(id)a0;
+ (id)defaultAvatarBgColor;
+ (id)formatAvatarTipsCacheKey;
+ (BOOL)canShowFormatBreathingViewWithContext:(id)a0;
+ (void)trackAvatarComponent:(id)a0 headerContext:(id)a1 isClick:(BOOL)a2 isLongPress:(BOOL)a3;
+ (BOOL)canEnterFormatRoomWithContext:(id)a0;
+ (BOOL)canShowFormatBreathingViewFromMySelf:(id)a0;
+ (BOOL)canShowFormatBreathingViewFromOther:(id)a0;

- (id)colorRingConfig;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)subscribeLiveStatusChange;
- (void)configWithContext:(id)a0;
- (id)tackStringForEpisodeType:(long long)a0;
- (id)tackStringForEpisodeSubtype:(long long)a0;
- (void)story25PublishTask:(id)a0 didBeginPublishWithInfo:(id)a1;
- (void)story25PublishTask:(id)a0 didEndPublishWithError:(id)a1;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)avatarDecorationDidShowAndTrackEvent;
- (void)avatarDecorationWillShowAndTrackEvent;
- (void)onStory25PublishButtonClicked;
- (void)colorRingMonitor_DataAvailable;
- (void)trackLivePreviewPlayEvent;
- (void)showColorRing25PublishAnimationIfNeeded;
- (void)avatarLiveDidShowAndTrackEventWithAvatarView:(id)a0 checkFirstTime:(BOOL)a1;
- (void)trackClickProfileIconWithDecorationHidden:(BOOL)a0 enterLive:(BOOL)a1;
- (void)trackAdsAweme;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
