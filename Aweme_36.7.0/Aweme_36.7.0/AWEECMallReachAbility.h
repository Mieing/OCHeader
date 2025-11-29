@class NSString;
@protocol AWEMessageReachFrameConfigProtocol;

@interface AWEECMallReachAbility : NSObject <AWEMessageReachChannelControllerProtocol>

@property (nonatomic) BOOL enableMallReachMigrate;
@property (readonly, nonatomic) id<AWEMessageReachFrameConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestTopChannel:(id)a0 bottomChannel:(id)a1 showBadgeWithModel:(id)a2 context:(id)a3 showCallBack:(id /* block */)a4 hideCallBack:(id /* block */)a5 downgradeCallBack:(id /* block */)a6;
+ (void)requestTopChannel:(id)a0 bottomChannel:(id)a1 hideBadgeWithCompletion:(id /* block */)a2 context:(id)a3;
+ (BOOL)enableEcMallMsgReachOpt;
+ (void)setDataStageForComponentInfo:(id)a0 dataStage:(unsigned long long)a1;
+ (void)requestTopChannel:(id)a0 bottomChannel:(id)a1 showBubbleWithModel:(id)a2 context:(id)a3 showCallback:(id /* block */)a4 clickCallback:(id /* block */)a5 dismissCallback:(id /* block */)a6;
+ (void)requestTopChannel:(id)a0 bottomChannel:(id)a1 hideBubbleWithCompletion:(id /* block */)a2 context:(id)a3;
+ (void)trackBubbleEvent:(id)a0 withBubbleInfo:(id)a1 andParams:(id)a2;
+ (id)getBubbleInfoFromMallContext:(id)a0;
+ (void)trackBubbleFailWithBubbleInfo:(id)a0 isTextBadge:(BOOL)a1 source:(id)a2 reason:(id)a3;
+ (BOOL)enableEcMallMsgReachOptMallEntryTime;
+ (void)trackBadgeFailWithInfo:(id)a0 source:(id)a1 reason:(id)a2;
+ (id)getMallBubbleContextFromRmComponent:(id)a0 paramsModel:(id)a1;
+ (id)getMallBubbleContextFromRmContext:(id)a0;
+ (id)generateBussinessParamsModelWithResponse:(id)a0 bizSource:(id)a1 recallScene:(id)a2 bubbleShowCallback:(id /* block */)a3 bubbleDismissCallback:(id /* block */)a4 bubbleClickCallback:(id /* block */)a5 badgeShowCallback:(id /* block */)a6 badgeHideCallback:(id /* block */)a7 badgeDowngradeCallback:(id /* block */)a8 interruptCallback:(id /* block */)a9;
+ (id)getMallPluginTopChannel:(id)a0 bottomChannel:(id)a1;
+ (id)setupResponseWithModel:(id)a0;
+ (id)modelToDictWithModel:(id)a0;
+ (long long)bubbleConvertToNewRuiStyle:(long long)a0;
+ (long long)badgeConvertToNewRuiStyle:(long long)a0;
+ (id)getReqComponentModelWithParamsModel:(id)a0;

- (BOOL)canRequestMessageReachDataWithParamsModel:(id)a0;
- (id)startRequestMessageReachDataWithWithParamsModel:(id)a0;
- (id)componentVerify:(id)a0;
- (id)canShowMessageReachDataWithParamsModel:(id)a0 componentModel:(id)a1;
- (BOOL)canEscapeRequestUidCheck;
- (id)getBizTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
- (id)getBlockBizTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
- (void)showBadgeCallbackWithContext:(id)a0;
- (void)hideBadgeCallbackWithContext:(id)a0;
- (void)downgraBadgeCallbackWithContext:(id)a0;
- (void)showBubbleCallbackWithContext:(id)a0;
- (void)dismissBubbleCallbackWithContext:(id)a0;
- (BOOL)clickBubbleCallbackWithContext:(id)a0;
- (BOOL)shouldFilterComponent:(id)a0 paramsModel:(id)a1;
- (BOOL)shouldShowBubble:(id)a0 withInfo:(id)a1 source:(id)a2 errorDesc:(id *)a3;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithConfig:(id)a0;

@end
