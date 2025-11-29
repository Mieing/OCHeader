@class NSNumber, NSString;

@interface AWEIMChatCellOnlineGreetComponent : AWEIMChatCellComponentBase <AWEIMChatCellTailAction, AWEIMChatCellTailProvider, AWEIMOnLineDotUpdateAction, AWEIMOnlineGreetComponetService, AWEIMChatCellRecommendChatPresenterDelegate>

@property (nonatomic) long long currentShowType;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL shouldShow;
@property (retain, nonatomic) NSNumber *lastExitTimeNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_featureEnableCommonCheckWithContext:(id)a0;
+ (BOOL)p_featureEnableGroupChatWithContext:(id)a0;
+ (BOOL)p_featureEnableSingleChatWithContext:(id)a0;
+ (BOOL)p_featureEnableWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)updateComponentWhenChatUpdate:(id)a0;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (long long)currentComponentTailType;
- (void)cellTailDidUpdateWithType:(long long)a0;
- (void)onCellDidClick:(id)a0;
- (void)didClickRecommendChatActionButton:(id)a0;
- (void)p_updatePresenterDisplayEnable:(BOOL)a0;
- (void)aweim_onlineDotOnlineStatusUpdate:(id)a0;
- (BOOL)isGreetBtnShow;
- (void)p_updateCurrentPeerUserFrequencyControlForHighPriorityShowIfNeeded;
- (void)p_exitGreetBtnIfNeededForReason:(long long)a0;
- (BOOL)p_isLastMessageOrEmojiPropertyIn30mins;
- (void)p_showLightInteractionSendAnimation;
- (void)p_updatePresenterDisplayEnableWithOnlineInfo:(id)a0;
- (BOOL)p_isCurrentPeerUserInFrequencyControl;
- (BOOL)p_inFrequencyControl;
- (void)p_updateCurrentPeerUserFrequencyControlForReason:(long long)a0;
- (id)p_frequencyControlIdentifier;
- (void).cxx_destruct;

@end
