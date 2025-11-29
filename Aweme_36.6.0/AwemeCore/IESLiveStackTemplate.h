@class NSMutableDictionary, NSString, NSOperationQueue, NSMutableArray;
@protocol IESLiveStackTemplateFilterProtocol;

@interface IESLiveStackTemplate : NSObject <IESLiveLayoutContainerProvider>

@property (retain, nonatomic) NSMutableArray *managerQueue;
@property (retain, nonatomic) NSOperationQueue *dependencyQueue;
@property (retain, nonatomic) NSMutableDictionary *viewAnchorOp;
@property (nonatomic) BOOL enableDebugAssert;
@property (weak, nonatomic) id<IESLiveStackTemplateFilterProtocol> tempFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addView:(id)a0 viewType:(id)a1;
- (id)queryContainerByType:(id)a0;
- (id)queryViewByType:(id)a0;
- (void)insertShadowStackManager:(id)a0;
- (void)removeShadowStackManager:(id)a0;
- (BOOL)addViewElement:(id)a0;
- (BOOL)addView:(id)a0 viewType:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (BOOL)addView:(id)a0 viewType:(id)a1 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 size:(struct CGSize { double x0; double x1; })a3;
- (void)removeViewElement:(id)a0;
- (id)initWithStackManager:(id)a0;
- (void)executeAtState:(unsigned long long)a0;
- (struct { id x0; id x1; id x2; })containerMappingForViewType:(id)a0;
- (void)viewDidAdded:(id)a0;
- (void)addOperation:(id)a0 dependWithViewType:(id)a1;
- (void).cxx_destruct;

@end
