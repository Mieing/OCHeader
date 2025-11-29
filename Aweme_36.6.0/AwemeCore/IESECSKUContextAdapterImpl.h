@class NSString;

@interface IESECSKUContextAdapterImpl : NSObject <IESECSKUContextAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)skuParamsFromRawOrderParams:(id)a0;
- (id)ultimateBuyInputParamsFromShowRequest:(id)a0;
- (BOOL)isYataSKUContext:(id)a0;
- (id)skuContextFromShowRequest:(id)a0;
- (id)skuViewFromSKUContext:(id)a0;
- (id)skuVCFromSKUContext:(id)a0;
- (BOOL)isBuyNowSKUContext:(id)a0;

@end
