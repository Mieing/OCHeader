@class AWEPlayInteractionStrongifyShareContentView, AWEPlayInteractionStrongifyShareVideoToIMActionForShowHandler, NSArray, AWEPageContext, AWECommonButtonInfoModel, NSString;
@protocol AWEPlayInteractionBottomButtonViewProtocol, AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyProtocol, AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol, AWEPlayInteractionContextProtocol;

@interface AWEPlayInteractionStrongifyShareVideoToIMComponent : NSObject <AWEPlayInteractionStrongifyShareVideoToIMButtonDelegate, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) AWEPlayInteractionStrongifyShareContentView<AWEPlayInteractionBottomButtonViewProtocol> *buttonView;
@property (copy, nonatomic) id /* block */ sharePanelWillShowHandler;
@property (retain, nonatomic) id<AWEPlayInteractionStrongifyShareVideoToIMButtonStrategyProtocol> buttonStrategy;
@property (retain, nonatomic) AWEPlayInteractionStrongifyShareVideoToIMActionForShowHandler *actionForShowHandler;
@property (nonatomic) unsigned long long displayType;
@property (copy, nonatomic) NSArray *shareModels;
@property (nonatomic) long long trigerShowType;
@property (retain, nonatomic) NSString *clickType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;
+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)showBottomButtonWithTriggerType:(long long)a0;
- (void)hideBottomButton;
- (void)handleClickEventWithModel:(id)a0 clickBlock:(id /* block */)a1;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)didShowViewByTriggerDelay:(BOOL)a0;
- (id)bizParamsForShowEventTrack;
- (id)bizParamsForClickEventTrack;
- (void)setupBinding;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)fetchShareModelAndShowButtonWithTriggerType:(long long)a0;
- (void)p_removeOlderFollowGuideHandler;
- (void)onLongPressShowNotification:(id)a0;
- (void)handleIMSendShareMessageNoti:(id)a0;
- (void)handleIMTranspondListVCDidAppearNoti:(id)a0;
- (void)p_updateFrequencyControl;
- (BOOL)p_checkIsReadyBeforeShowWithTriggerType:(long long)a0;
- (void)showButtonWithTriggerType:(long long)a0;
- (void)updateButtonConfig;
- (void)shareToUser:(id)a0 customSnackBarTips:(id)a1 tagText:(id)a2;
- (id /* block */)p_shareConfigurationHandler;
- (id)bizParamsCommonParams;
- (id)p_trackShowType;
- (void).cxx_destruct;
- (void)dealloc;

@end
