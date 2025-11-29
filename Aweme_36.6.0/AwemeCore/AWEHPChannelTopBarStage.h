@class AWEHPTopTabItemUIModel, AWEHPTopTabTooBrightOptTabConfig, AWEHPChannelBadgeTask, AWEHPChannelTopTabItemSelectedIndicatorParams, AWEHPChannelTopTabItemIndicatorIconParams, AWEHPTopTabTooBrightOptMaskConfig, NSString, AWEHPTabAlphaTask, AWEHPUIControlTaskPriorityQueue, AWEHPChannelItemModel, NSNumber, AWEHPTopTabLottieTask, AWEHPRefreshTask, AWEHPChannelBubbleTask, AWEHPTabHiddenTask;
@protocol AWEHPPinTopComponentProtocol;

@interface AWEHPChannelTopBarStage : NSObject

@property (retain, nonatomic) AWEHPTopTabItemUIModel *topTabItemUIModel;
@property (readonly, nonatomic) AWEHPChannelTopTabItemIndicatorIconParams *indicatorIcon;
@property (readonly, nonatomic) AWEHPChannelTopTabItemSelectedIndicatorParams *selectedIndicatorInfo;
@property (retain, nonatomic) AWEHPChannelItemModel *tabItemModel;
@property (retain, nonatomic) NSString *accessibilityHintText;
@property (retain, nonatomic) NSString *accessibilityValue;
@property (retain, nonatomic) NSString *accessibilityHintSuffix;
@property (nonatomic) long long topTabOrder;
@property (nonatomic) long long topTabOrderAlignMainTab;
@property (nonatomic) long long topRecommendTabOrder;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) BOOL isTopTabContainerAppear;
@property (retain, nonatomic) AWEHPChannelBadgeTask *curBadgeTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *curPrecheckBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *curBubbleTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *curPrecheckBubbleTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *lastShowBadgeTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *lastShowBubbleTask;
@property (nonatomic) unsigned long long topBarThemeStyle;
@property (nonatomic) unsigned long long dotSceneStyle;
@property (retain, nonatomic) id<AWEHPPinTopComponentProtocol> pinTopComponent;
@property (retain, nonatomic) AWEHPTopTabLottieTask *lottieTask;
@property (retain, nonatomic) AWEHPTopTabLottieTask *tempLottieTask;
@property (retain, nonatomic) AWEHPRefreshTask *refreshTask;
@property (nonatomic) long long maskStatus;
@property (retain, nonatomic) NSNumber *brightness;
@property (retain, nonatomic) AWEHPTopTabTooBrightOptMaskConfig *tooBrightOptMaskConfig;
@property (retain, nonatomic) AWEHPTopTabTooBrightOptTabConfig *tooBrightOptTabConfig;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *alphaQueue;
@property (retain, nonatomic) AWEHPUIControlTaskPriorityQueue *hiddenQueue;
@property (weak, nonatomic) AWEHPTabAlphaTask *effectAlphaTask;
@property (weak, nonatomic) AWEHPTabHiddenTask *effectHiddenTask;

- (void)updateAccessibilityHint;
- (void)updateIndicatorIcon:(id)a0;
- (void)updateSelectedIndicatorParams:(id)a0 updateUIModel:(BOOL)a1;
- (void)updateIndicatorIconMaxConfigWithIcon:(id)a0;
- (double)p_getIndicatorIconDistance:(id)a0;
- (struct CGSize { double x0; double x1; })p_getIndicatorIconSize:(id)a0;
- (void)p_tryUpdateIndicatorIconMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_tryUpdateIndicatorIconMaxDistance:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)debugDescription;
- (void)updateAccessibilityValue;

@end
