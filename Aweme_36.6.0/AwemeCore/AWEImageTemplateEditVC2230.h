@class AWEVideoPublishViewModel, NSString, AWEImageTemplateEditViewModel, UIView, NSObject, AWEImageTemplateListView;
@protocol AWEImageTemplateEditVC2230Delegate, ACCLoadingViewProtocol, AWEImageTemplateListViewDelegate, ACCEditServiceProtocol;

@interface AWEImageTemplateEditVC2230 : UIViewController <UIGestureRecognizerDelegate, ACCFullScreenPanelViewProtocol>

@property (weak, nonatomic) AWEImageTemplateEditViewModel *vm;
@property (nonatomic) double templateStartLoadingStamp;
@property (weak, nonatomic) NSObject<AWEImageTemplateListViewDelegate> *listViewDelegate;
@property (retain, nonatomic) AWEImageTemplateListView *templateListView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingIndicator;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<AWEImageTemplateEditVC2230Delegate> delegate;
@property (copy, nonatomic) id /* block */ customDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePreupload;

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void)p_dismiss;
- (id)currentImageItemModel;
- (void)p_configVM;
- (void)startFetchTemplateListData;
- (void)updateTemplateListViewUI;
- (void)p_monitorImageTemplatePanelLoadWithIfSuccess:(BOOL)a0;
- (void)applyTemplateSuccess;
- (void)alertApplyTemplateFailedWithAction:(id /* block */)a0 cancel:(id /* block */)a1;
- (void)bgTapAction:(id)a0;
- (id)initWithVM:(id)a0 listViewDelegate:(id)a1;
- (void)applyTemplateFail;
- (void)p_setupUI;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (double)animationDuration;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void *)identifier;
- (void)viewDidAppear:(BOOL)a0;
- (id)panelName;

@end
