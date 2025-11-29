@class NSDictionary, AWEGoodsDetailPageContext, NSString;

@interface AWEGDContainerRecoveryProvider : NSObject <AWEGDContainerRecoveryProtocol>

@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSDictionary *ditoDataDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)industrySettings;
- (id)industryKeyFromDitoDataDict:(long long)a0;
- (BOOL)canShowNaviPayBar:(id)a0;
- (void)routerToPayWithDitoDataDict:(id)a0;
- (id)buttonTitleWithDitoDataDict:(id)a0 byDefault:(id)a1;
- (id)templateUrlWithDitoDataDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
