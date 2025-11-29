@class NSString, BDXThreadSafeDictionary;

@interface AnnieXCardViewService : NSObject <BDXViewContainerServiceProtocol>

@property (retain, nonatomic) BDXThreadSafeDictionary *globalCardMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)createViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createAnnieXCardWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardModel:(id)a1;
- (id)createAnnieXCardWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardModel:(id)a1 isAsyncLoad:(BOOL)a2;
- (id)createAnnieXCardWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardModel:(id)a1 containerDelegates:(id)a2;
- (id)getViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 urlString:(id)a1 context:(id)a2;
- (id)getAnnieXCardModelWithURL:(id)a0;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 completion:(id /* block */)a1;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 bid:(id)a1 completion:(id /* block */)a2;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 cardBuilder:(id /* block */)a3;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 cardBuilder:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 cardBuilder:(id /* block */)a5;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 cardBuilder:(id /* block */)a5 completion:(id /* block */)a6;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 cardBuilder:(id /* block */)a6;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 cardBuilder:(id /* block */)a6 completion:(id /* block */)a7;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 queryItems:(id)a2;
- (void)asyncGetAnnieXCardModelWithURL:(id)a0 bid:(id)a1 queryItems:(id)a2 completion:(id /* block */)a3;
- (id)getAnnieXContextWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 cardBuilder:(id /* block */)a6 contextBuilder:(id /* block */)a7;
- (id)getAnnieXCardViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 urlString:(id)a1;
- (id)getAnnieXCardViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 urlString:(id)a1 bid:(id)a2;
- (id)getAnnieXCardViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 urlString:(id)a1 bid:(id)a2 schemaClass:(Class)a3 cardBuilder:(id /* block */)a4;
- (void)asyncLoadViewWithNeedRender:(BOOL)a0 cardModel:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 layoutCompletion:(id /* block */)a3;
- (void)asyncLoadViewWithNeedRender:(BOOL)a0 cardModel:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 layoutCompletion:(id /* block */)a3 viewCreatorCompletion:(id /* block */)a4;
- (BOOL)bindCard:(id)a0 sessionId:(id)a1;
- (id)fetchCardCacheWithSessionId:(id)a0;
- (void)destoryCardWithSessionId:(id)a0;
- (id)getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 cardBuilder:(id /* block */)a4;
- (id)p_getAnnieXCardModelWithURL:(id)a0 bid:(id)a1 schemaClass:(Class)a2 queryItem:(id)a3 engineType:(id)a4 containerType:(id)a5 cardBuilder:(id /* block */)a6;
- (void)p_triggerForestPreloadIfNeeded:(id)a0 containerType:(id)a1 monitor:(id)a2;
- (BOOL)p_disablePreload:(id)a0 containerType:(id)a1;
- (void).cxx_destruct;

@end
