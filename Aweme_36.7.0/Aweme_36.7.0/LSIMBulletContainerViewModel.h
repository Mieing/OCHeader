@class LSIMBulletContainerView, NSString, NSDictionary, LSIMBulletContainerPreLayoutInfo, LSIMBulletTemplateModel, LSIMBulletMonitor, BDXContext;
@protocol LSIMBulletContainerLifeCycleDelegate;

@interface LSIMBulletContainerViewModel : NSObject <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *schemaExtraParams;
@property (nonatomic) BOOL canProcessRender;
@property (retain, nonatomic) LSIMBulletContainerPreLayoutInfo *prelayoutInfo;
@property (copy, nonatomic) NSDictionary *initialDataDict;
@property (copy, nonatomic) NSDictionary *preserveData;
@property (copy, nonatomic) id /* block */ clientDataIsEqualBlock;
@property (retain, nonatomic) LSIMBulletMonitor *monitor;
@property (weak, nonatomic) id<LSIMBulletContainerLifeCycleDelegate> lifeCycleDelegate;
@property (weak, nonatomic) LSIMBulletContainerView *bulletContainer;
@property (copy, nonatomic) NSString *dataIdentifier;
@property (retain, nonatomic) LSIMBulletTemplateModel *dynamicPatchModel;
@property (nonatomic) struct CGSize { double width; double height; } lastDynamicSize;
@property (nonatomic) struct CGSize { double width; double height; } dynamicSize;
@property (nonatomic) BOOL didFirstScreen;
@property (nonatomic) BOOL viewIsDisplaying;
@property (nonatomic) BOOL hasSetupJsRuntime;
@property (nonatomic) BOOL enablePreserveData;
@property (nonatomic) long long loadType;
@property (nonatomic) long long bulletGenerateType;
@property (retain, nonatomic) BDXContext *context;
@property (readonly, nonatomic) long long bdxContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBDXContextWithBulletContext:(id)a0;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)container:(id)a0 didReceivePerformance:(id)a1;
- (void)containerDidConstructJSRuntime:(id)a0;
- (void)p_tryPreActiveGecko;
- (id)innerMonitor;
- (id)preferIdentifier;
- (id)schemaWithNeedExtraParams:(BOOL)a0;
- (id)initWithBulletContext:(id)a0;
- (void)updateContainerStatusInfoWithViewModel:(id)a0;
- (BOOL)bulletContainerDataIsEqualTo:(id)a0;
- (long long)loadTypeWithNoDataChange:(BOOL)a0 noSchemaChange:(BOOL)a1;
- (void)containerStartLoadingWithType:(long long)a0;
- (void)resetContainerStatusInfo;
- (void)containerDidEndLoadOnMainThread;
- (BOOL)p_canReuseBulletTemplate;
- (void)p_injectPerfDataIntoContext;
- (id)p_uniqueViewID;
- (id)p_cardType;
- (void)p_containerDidEndLoad;
- (void)p_trackBulletContainerDidFinishLoadByForce:(BOOL)a0;
- (void).cxx_destruct;

@end
