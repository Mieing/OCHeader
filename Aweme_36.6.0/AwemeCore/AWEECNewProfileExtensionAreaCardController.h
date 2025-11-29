@class AWEProfileExtensionAreaCommonParamModel, NSString, NSDictionary, NSDate;
@protocol AWEProfileExtensionAreaCardViewProtocol, AWEProfileExtensionAreaContainerProtocol;

@interface AWEECNewProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol>

@property (retain, nonatomic) id<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (retain, nonatomic) AWEProfileExtensionAreaCommonParamModel *commonParamModel;
@property (retain, nonatomic) NSString *subtitleText;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) NSDictionary *cardData;
@property (nonatomic) BOOL isOrderCard;
@property (nonatomic) BOOL isIconRepeat;
@property (nonatomic) BOOL shouldShowIconAnimation;
@property (nonatomic) BOOL hasUnread;
@property (nonatomic) BOOL isCardChangeBlocked;
@property (nonatomic) BOOL hasAppear;
@property (nonatomic) double appearTimeStamp;
@property (nonatomic) BOOL needShowDynamicIcon;
@property (retain, nonatomic) NSDate *createdDate;
@property (retain, nonatomic) NSString *dynamicText;
@property (weak, nonatomic) id<AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) BOOL didRelaunchContainerActionCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardControllerWithCommonParam:(id)a0;
+ (BOOL)checkMyOrderListCardIsExisted:(id)a0;
+ (Class)aAWEECFeatureDOUYINLiteAdapterClass;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (BOOL)shouldShowCard;
- (void)configDelegate:(id)a0;
- (void)cardDidAppear;
- (void)cardDidDisappear;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowPopover;
- (void)configPopoverConfigModel:(id)a0;
- (BOOL)needToShowDynamicIcon;
- (void)configReminderIconConfigModel:(id)a0;
- (id)storeSourceParamsWithExtraInfoDic:(id)a0;
- (BOOL)shouldShowDot;
- (void)__prehotISVContainerIfNeeded;
- (BOOL)userIsMaster;
- (id)aAWEECFeatureDOUYINLiteAdapter;
- (void)configCardData;
- (void)configIsOrderCard;
- (void)configShouldShowIconAnimation;
- (void)updateCardView;
- (BOOL)shouldBlockCardChange;
- (void)configHasUnread;
- (void)updateSubTitleText;
- (void)updateCustomDetailView;
- (void)updateOrderCounterWhenMsgReceived;
- (id)updateTimeKey;
- (id)commonTrackParamsByExtraInfoDic:(id)a0 userModel:(id)a1 cardData:(id)a2 cardModel:(id)a3 cardIndex:(unsigned long long)a4 subtitle:(id)a5 isDotViewShow:(BOOL)a6 userIsMaster:(BOOL)a7 showIconAnimation:(BOOL)a8;
- (BOOL)isShopScene;
- (void)__reinitValidDurIfNeeded;
- (void)__triggerPitayaAiTaskIfNeeded;
- (void)__syncShopGeckoResourcesIfNeeded;
- (BOOL)isWindowScene;
- (void)__tryToTunPitayaTask;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2 cardModel:(id)a3 extraInfo:(id)a4 cardIndex:(unsigned long long)a5 subtitle:(id)a6 isDotViewShow:(BOOL)a7 cardData:(id)a8 shouldTrackAppearEvent:(BOOL)a9 shouldShowIconAnimation:(BOOL)a10;
- (id)__buildShopSchemaWithSchema:(id)a0 extraInfo:(id)a1 animation:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
