@class CContact, NSString, WCAdConventionalKefuDetailView, UIButton;

@interface WCAdConventionalKefuViewController : WCAdConventionalDetailContainerViewController <IOpenImResourceMgrExt>

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) WCAdConventionalKefuDetailView *detailView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 clickActionInfo:(id)a1 scene:(unsigned long long)a2 contact:(id)a3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUIContents;
- (void)layoutUIContents;
- (id)confirmInfo;
- (void)onConfirmButtonClick;
- (void)handleOpenCustomerServiceWithResult:(unsigned long long)a0;
- (void)doConfirmButtonClickReport;
- (void)onGetOpenImResourceDone:(id)a0;
- (void).cxx_destruct;

@end
