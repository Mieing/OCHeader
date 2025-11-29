@class NSString, NSDictionary, LLCubeView, LLDitoPageContext, LLDitoNestedScrollExtensionV2;

@interface LLDitoLynxNativeModule : NSObject <LynxModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) LLCubeView *cubeView;
@property (weak, nonatomic) LLDitoPageContext *pageContext;
@property (weak, nonatomic) LLDitoNestedScrollExtensionV2 *nestedScrollExtensionV2;
@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (id)getDitoContainerSize:(id)a0;
- (id)inner_containerSizeWithType:(id)a0;
- (void)asyncGetContainerBoundingRect:(id /* block */)a0;
- (void)asyncGetContainerBoundingRectToWindow:(id /* block */)a0;
- (void)getParentNodeData:(id /* block */)a0;
- (void)getParentNodeDataWithKey:(id)a0 callBack:(id /* block */)a1;
- (id)getDitoHalfContainerParams;
- (id)enableDitoScroll:(BOOL)a0;
- (id)enableDitoBodyListScroll:(BOOL)a0;
- (id)inner_getContainerBoundingRect;
- (id)inner_getContainerBoundingRectToWindow;
- (id)inner_containerRectToWindowWithType:(id)a0;
- (void)findLastestMatchedNodeDataIn:(id)a0 withKey:(id)a1 result:(id)a2;
- (id)dictParamsToString:(id)a0;
- (id)parseCurrentDitoHalfContainerType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
