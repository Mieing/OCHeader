@class IESIMCodeGenFloatingBarDynamicModelModel, NSArray, NSString, IESIMCodeGenFloatingBarConfigModel, AWEIMInfoOtherResponseFloatingBarInfoModel, IESIMCodeGenConversationFloatingBarConfigsResponseModel, AWEIMTopNoticeTipViewConfig, AWEIMTopNoticeTipView, IESIMCodeGenGeneralFloatingBarModel;
@protocol AWEIMMessageListTopFloatingInterface, IESIMConvFloatingBarDataService, AWEIMTopNoticeTipInteractorProtocol;

@interface AWEIMConversationReportInteractor : AWEIMTopNoticeTipInteractor <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMTopNoticeTipInteractorProtocol, IESIMConvFloatingBarDataAction, AWEIMConversationReportInteractorInterface>

@property (retain, nonatomic) AWEIMInfoOtherResponseFloatingBarInfoModel *response;
@property (retain, nonatomic) IESIMCodeGenGeneralFloatingBarModel *model;
@property (retain, nonatomic) IESIMCodeGenFloatingBarDynamicModelModel *dynamicModel;
@property (retain, nonatomic) IESIMCodeGenFloatingBarConfigModel *configModel;
@property (copy, nonatomic) NSArray *userBarDataModels;
@property (copy, nonatomic) NSString *storeKey;
@property (copy, nonatomic) NSArray *bannerCloseRecord;
@property (copy, nonatomic) NSArray *bannerShowRecord;
@property (weak, nonatomic) id<AWEIMMessageListTopFloatingInterface> floatingService;
@property (weak, nonatomic) id<IESIMConvFloatingBarDataService> convFloatingBarDataService;
@property (retain, nonatomic) IESIMCodeGenConversationFloatingBarConfigsResponseModel *configsModel;
@property (copy, nonatomic) NSString *conversationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;
@property (readonly, nonatomic) AWEIMTopNoticeTipViewConfig *config;
@property (readonly, nonatomic) AWEIMTopNoticeTipView *noticeTipView;
@property (weak, nonatomic) id<AWEIMTopNoticeTipInteractorProtocol> topTipViewDelegate;
@property (readonly, nonatomic) BOOL showing;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)convFloatingBarDataChangedWithChangedContext:(id)a0;
- (id)vcParent;
- (BOOL)canShowTip;
- (id)makeSchemaFromDynamicModelAndConfigModel;
- (id)makeBarTextFromDynamicModelAndConfigModel;
- (void)didRemoveRiskMember;
- (void)storeShowInfo;
- (BOOL)checkCanShowTips;
- (void)showTipViewForModel;
- (id)__bannerCloseRecordKey;
- (id)__getBannerRecordForKey:(id)a0;
- (void)__updateBannerRecord:(id)a0 forKey:(id)a1;
- (id)__bannerShowRecordKey;
- (void)didClickTopTipViewActionBtnWithType:(long long)a0;
- (void)didClickTopTipViewCloseBtnWithType:(long long)a0;
- (id)__checkCloseTimesFrequent;
- (id)__checkShowTimesFrequent;
- (void)__updateBannerShowRecord;
- (void)__updateBannerCloseRecord;
- (void)__trackWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
