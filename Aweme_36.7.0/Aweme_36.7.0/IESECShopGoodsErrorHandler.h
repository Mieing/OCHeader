@class IESECShopContext, NSString, IESECShopGoodsState;

@interface IESECShopGoodsErrorHandler : NSObject <IESECShopGoodsStateAttachable>

@property (retain, nonatomic) IESECShopGoodsState *state;
@property (readonly, nonatomic) IESECShopContext *legacyShopContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportWithError:(id)a0;
- (void)attachState:(id)a0;
- (void).cxx_destruct;

@end
