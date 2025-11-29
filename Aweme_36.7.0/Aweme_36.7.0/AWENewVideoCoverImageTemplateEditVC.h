@class NSString, AWEImageTemplateEditViewModel, AWENewVideoImageTemplateListView, UIView, NSObject, AWEVideoPublishViewModel;
@protocol OS_dispatch_group, ACCLoadingViewProtocol, AWEImageTemplateListViewDelegate, ACCEditServiceProtocol;

@interface AWENewVideoCoverImageTemplateEditVC : UIViewController <ACCPanelViewProtocol>

@property (weak, nonatomic) AWEImageTemplateEditViewModel *vm;
@property (nonatomic) double templateStartLoadingStamp;
@property (weak, nonatomic) NSObject<AWEImageTemplateListViewDelegate> *listViewDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *imageURIGroup;
@property (retain, nonatomic) AWENewVideoImageTemplateListView *templateListView;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingIndicator;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ customDismissAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)fetchImageFeatureAndTemplateList;
- (void)addUploadImageTask:(id /* block */)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void *)identifier;
- (void)viewDidAppear:(BOOL)a0;
- (id)panelName;

@end
