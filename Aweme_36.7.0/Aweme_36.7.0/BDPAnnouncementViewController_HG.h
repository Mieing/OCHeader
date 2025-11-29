@class NSArray, NSString, UIView, BDPUniqueID, MASConstraint;

@interface BDPAnnouncementViewController_HG : BDPBaseAlertViewController <BDPBootLifeCycleMessage, BDPAppInterfaceOrientationChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) UIView *announcementView;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) MASConstraint *heightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showNextViewController:(id)a0 uniqueID:(id)a1;
+ (void)updateModelWithCacheKey:(id)a0 modelId:(id)a1;

- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationSCFirstFrameDidShow:(id)a0;
- (void)firstFrameDidShow:(id)a0;
- (void)interfaceOrientationChange:(id)a0 targetOrientation:(long long)a1 uniqueID:(id)a2;
- (id /* block */)redirectActionWithModel:(id)a0;
- (id)getParentViewController;
- (void)recordAgreeAction;
- (void)jumpPrivacyWebView:(id)a0;
- (void)jumpToSchema;
- (void).cxx_destruct;
- (id)session;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)alertView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)aid;
- (void)layoutUI;

@end
