@class NSString, AWEIMConversationContext, NSDictionary, RxDeferred;

@interface AWEIMMessageListPerformSchemaComponent : AWEIMComponentBase

@property (readonly, nonatomic) AWEIMConversationContext *convContext;
@property (readonly, copy, nonatomic) NSString *convID;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSDictionary *schemaParams;
@property (readonly, nonatomic) RxDeferred *viewDidAppearDefer;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)p_viewDidAppear;
- (void)__log:(id)a0;
- (id)__routerUrlStringWithSchema:(id)a0;
- (void)__performSchema;
- (id)__fetchPreDependencyResult;
- (id)__delayDependencyPromise;
- (id)__businessDependencyPromise;
- (id)__businessDependencyMapperWithTaskType:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
