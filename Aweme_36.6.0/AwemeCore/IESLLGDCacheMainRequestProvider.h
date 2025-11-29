@class IESLLGoodsDetailPageContext, NSString;

@interface IESLLGDCacheMainRequestProvider : NSObject <IESLLGDContainerMainRequestProtocol>

@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *bizCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 bizCode:(id)a1;
- (BOOL)isJumpToMiddlePage:(id)a0;
- (void)pageScheme:(id)a0 params:(id)a1 headers:(id)a2 cache:(BOOL)a3 ditoRequestCreated:(id /* block */)a4;
- (void)disasterPageScheme:(id)a0 path:(id)a1 params:(id)a2 headers:(id)a3 ditoRequestCreated:(id /* block */)a4;
- (BOOL)pageSchemeTriggerCacheRender:(id)a0 params:(id)a1 headers:(id)a2 cache:(BOOL)a3 ditoRequestCreated:(id /* block */)a4;
- (void)addCacheWithParams:(id)a0 andData:(id)a1;
- (void).cxx_destruct;

@end
