@class IESIMCodeGenFloatingBarDynamicModelModel, NSArray, IESIMCodeGenConversationFloatingBarConfigsResponseModel, IESIMCodeGenFloatingBarConfigModel, AWEIMInfoOtherResponseFloatingBarInfoModel, NSString, IESIMCodeGenGeneralFloatingBarModel, AWEIMMigratingAuthorizationTopNoticeTipView;
@protocol IESIMConvFloatingBarDataService;

@interface AWEIMMigratingAuthorizationTopNoticeTipComponent : AWEIMComponentBase <AWEIMConversationInfoOtherSubscriberProtocol, AWEIMMessageListBackgroundAction, AWEIMFloatingViewDispatchProtocol, IESIMConvFloatingBarDataAction>

@property (retain, nonatomic) AWEIMInfoOtherResponseFloatingBarInfoModel *response;
@property (retain, nonatomic) IESIMCodeGenGeneralFloatingBarModel *model;
@property (retain, nonatomic) IESIMCodeGenFloatingBarDynamicModelModel *dynamicModel;
@property (retain, nonatomic) IESIMCodeGenFloatingBarConfigModel *configModel;
@property (copy, nonatomic) NSArray *userBarDataModels;
@property (retain, nonatomic) AWEIMMigratingAuthorizationTopNoticeTipView *view;
@property BOOL isFollowTipsViewShowing;
@property (weak, nonatomic) id<IESIMConvFloatingBarDataService> convFloatingBarDataService;
@property (retain, nonatomic) IESIMCodeGenConversationFloatingBarConfigsResponseModel *configsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)viewDidChangeBackgroundImage:(BOOL)a0;
- (id)conversationInfoOtherRequestParams;
- (void)updateConversationInfoOtherData:(id)a0 source:(id)a1;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)convFloatingBarDataChangedWithChangedContext:(id)a0;
- (void)showTipView;
- (id)vcParent;
- (BOOL)canShowTip;
- (void)didMigratingAuthorizationStatusChange:(id)a0;
- (id)makeSchemaFromDynamicModelAndConfigModel;
- (id)makeBarTextFromDynamicModelAndConfigModel;
- (void)configViewClickBlock;
- (void)didClickTopTipViewActionBtn;
- (void)didClickTopTipViewCloseBtn;
- (void).cxx_destruct;
- (void)dealloc;

@end
