@class NSString, WCFinderLiveShareCardExposeReportAdapter, WCFinderAuthInfo;
@protocol WCFinderShareLiveCellViewDelegate;

@interface WCFinderShareLiveCellViewModel : CommonMessageViewModel <WCFinderLiveExt>

@property (nonatomic) BOOL isShareBySelf;
@property (weak, nonatomic) id<WCFinderShareLiveCellViewDelegate> liveDelegate;
@property (readonly, nonatomic) double estimateWidth;
@property (readonly, copy, nonatomic) WCFinderAuthInfo *authInfo;
@property (readonly, copy, nonatomic) NSString *tailTagURL;
@property (readonly, nonatomic) double gradientLayerHeight;
@property (readonly, nonatomic) int cellViewType;
@property (retain, nonatomic) WCFinderLiveShareCardExposeReportAdapter *exposeReportAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;
+ (double)cellViewEstimateWidth;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)avatarUrl;
- (id)nickname;
- (struct CGSize { double x0; double x1; })imageSize;
- (double)adjustImageRatio;
- (id)coverUrl;
- (id)bareCoverUrl;
- (id)maskUrl;
- (id)desc;
- (id)coverEffectText;
- (id)genFinderDataItem;
- (unsigned long long)finderLiveStatus;
- (id)gradientLayerEndColor;
- (id)gradientLayerBeginColor;
- (id)priceColor;
- (id)descColor;
- (id)descFont;
- (BOOL)canForward;
- (double)descHeight:(int)a0;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })defaultContentViewSize;
- (BOOL)shouldShowMaskView;
- (BOOL)shouldShowLiveEffectSpam;
- (BOOL)shouldShowGeneratingReplay;
- (BOOL)isCompleteFinderLiveReplay;
- (BOOL)shouldRemoveLiveNowView;
- (BOOL)needPayForLive;
- (BOOL)isReplay;
- (BOOL)isNeedRemoveNowView;
- (BOOL)isJumpFeedReplay;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)a0 coverInfo:(id)a1;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)a0 liveInfo:(id)a1;
- (void)onFinderLiveReplayStatusUpdated:(id)a0 replayStatus:(unsigned int)a1;
- (void)onFinderLiveReplaySettingUpdated:(id)a0 replayEnabled:(BOOL)a1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getReferImage;
- (void)onExposeReport;
- (void)preloadReplay;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)a0;
- (void)reportEcsData:(id)a0;
- (void).cxx_destruct;

@end
