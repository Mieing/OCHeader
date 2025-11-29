@class NSString, AWEShareTokenHandlerResponseModel;

@interface AWEShareReflowStrategyPlayRemote : NSObject <AWEShareReflowStrategy>

@property (nonatomic) unsigned long long schemaType;
@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (copy, nonatomic) NSString *longURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 longURL:(id)a1;
- (BOOL)shouldAvoidSamePageWithModel:(id)a0;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:(id)a0 params:(id)a1 longURL:(id)a2 tokenFromType:(long long)a3;
- (void)configReflowCardWithModel:(id)a0 tokenFromType:(long long)a1 trackParams:(id)a2 reportParams:(id)a3 turnToShareBlock:(id /* block */)a4 reshowCardViewBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void).cxx_destruct;
- (id)descriptionText;
- (id)tokenType;

@end
