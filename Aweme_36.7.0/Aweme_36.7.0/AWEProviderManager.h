@class NSString, NSArray, NSDictionary, AWEPageContext, AWEAwemeModel, NSMutableArray, AWETemplateBarContext;
@protocol AWEProviderManagerDelegate, AWEViewProviderProtocol, AWEBarLifeCycleProtocol;

@interface AWEProviderManager : NSObject <AWEProviderManagerProtocol, AWEBarLifeCycleProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) Class providerRegister;
@property (retain, nonatomic) NSMutableArray *providers;
@property (retain, nonatomic) id<AWEViewProviderProtocol, AWEBarLifeCycleProtocol> currentProvider;
@property (weak, nonatomic) id<AWEProviderManagerDelegate> delegate;
@property (readonly, nonatomic) NSArray *objcs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hideByServerStrategiesWithTemplateBarModel:(id)a0 referString:(id)a1 awemeModel:(id)a2;
+ (unsigned long long)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 registerClass:(Class)a2 context:(id)a3;
+ (unsigned long long)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 registerClass:(Class)a2 context:(id)a3 extraInfo:(id)a4;

- (void)viewController_didEndDisplaying;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (void)viewDidChangeBreakPoint;
- (void)registProvidersForRefactor;
- (void)registProviders;
- (BOOL)canShowWhenWillDisplay;
- (void)viewController_viewWillDisplay;
- (void)viewController_viewDidDisplay;
- (id)initWithScene:(unsigned long long)a0 providerRegister:(Class)a1;
- (void)updateWithData:(id)a0 context:(id)a1 extraInfo:(id)a2;
- (id)initWithData:(id)a0 scene:(unsigned long long)a1 providerRegister:(Class)a2 context:(id)a3;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)updateWithData:(id)a0;
- (void)reset;

@end
