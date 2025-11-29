@class NSString, ACCDRLynxViewAssembler, AWEVideoPublishViewModel, UIView, UIButton;
@protocol ACCTextLoadingViewProtcol, IESServiceProvider, ACCDRContextProtocol, ACCDRPublishService;

@interface ACCDRPublishEndViewController : UIViewController <ACCDRPublishSubscription, ACCDRLynxContainerViewDelegate, ACCDRViewControllerProtocol>

@property (retain, nonatomic) ACCDRLynxViewAssembler *viewAssembler;
@property (retain, nonatomic) id<ACCDRPublishService> publishService;
@property (retain, nonatomic) id<ACCDRContextProtocol> context;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *retryView;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupLynxView;
- (void)containerViewDidFinishLoadWithURL:(id)a0;
- (void)containerViewDidLoadFailedWithURL:(id)a0 error:(id)a1;
- (void)closeCurrentVC;
- (void)loadActivityInfo;
- (void)cancelLoadingView;
- (void)publishStart;
- (void)publishProgressChangedTo:(double)a0;
- (void)publishSucceed;
- (void)publishFailed;
- (id)initWithDynamicRecordBusinessConfiguration:(id)a0 publishViewModel:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
