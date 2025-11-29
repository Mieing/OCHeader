@class NSString, CMessageWrap, FlutterBizPoiSelectorPlugin, BrandTLExptConfig;

@interface FlutterBizPoiSelectViewController : MMFlutterViewController <BrandTLViewControllerProtocol>

@property (retain, nonatomic) FlutterBizPoiSelectorPlugin *apiImpl;
@property (copy, nonatomic) id /* block */ finishCallback;
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
- (id)initWithPoiInfo:(struct LaunchBizPoiSelectorInfo { void /* function */ **x0; int x1; int x2[3]; void *x3; void *x4; struct BizPoiSelectorGpsInfo *x5; struct RepeatedPtrField<biz::BizPoiSelectorGpsInfo> { void **x0; int x1; int x2; int x3; } x6; })a0 finishCallback:(id /* block */)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupPlugins;
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)entryPoint;
- (BOOL)shouldUpdatePageStateWhenPreRenderStart;
- (void).cxx_destruct;

@end
