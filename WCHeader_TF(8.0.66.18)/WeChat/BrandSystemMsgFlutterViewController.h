@class NSString, CMessageWrap, FlutterBrandTLApiImplementation, BrandTLExptConfig;

@interface BrandSystemMsgFlutterViewController : MMFlutterViewController <BrandTLViewControllerProtocol>

@property (retain, nonatomic) FlutterBrandTLApiImplementation *apiImpl;
@property (nonatomic) BOOL didAppear;
@property (retain, nonatomic) BrandTLExptConfig *exptConfig;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long enterRowIndexInMainFrameSession;
@property (nonatomic) BOOL isShowRedDotInMainFrameSession;
@property (nonatomic) unsigned int redDotCount;
@property (retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession;
@property (nonatomic) unsigned int enterSessionInfoNotifyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExptConfig:(id)a0;
- (void)dealloc;
- (void)setupPlugins;
- (void)didTakeSnapshot:(id)a0;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)entryPoint;
- (void).cxx_destruct;

@end
