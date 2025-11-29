@class AWEPostPageLifeCycleDispatcher, NSMutableDictionary, NSArray, NSString, NSMutableArray;
@protocol AWEPostPageContext, AWEPostPageFeatureConfigService, IESServiceProvider;

@interface AWEPostPageElementCenter : NSObject <AWEPostPageElementCenter>

@property (retain, nonatomic) NSMutableDictionary *elementDict;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEPostPageLifeCycleDispatcher *lifeCycleDispatcher;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly, weak, nonatomic) id<AWEPostPageContext> context;
@property (retain, nonatomic) NSArray *sceneRegisteredElements;
@property (retain, nonatomic) NSArray *sceneRegisteredServices;
@property (weak, nonatomic) id<AWEPostPageFeatureConfigService> featureConfigService;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (BOOL)shouldElementAppearWhenReload:(id)a0;
- (id)addElementClass:(Class)a0;
- (id)elementForType:(id)a0;
- (void)registerElements;
- (void)reloadElementType:(id)a0;
- (BOOL)isValidClass:(Class)a0;
- (BOOL)isValidClassForFeatureConfig:(Class)a0;
- (void)broadcastUpdateEvent;
- (void).cxx_destruct;
- (id)allElements;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)registerServices;

@end
