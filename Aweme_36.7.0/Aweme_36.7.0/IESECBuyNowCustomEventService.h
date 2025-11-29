@interface IESECBuyNowCustomEventService : NSObject

+ (BOOL)trackAdLogWithParams:(id)a0 creativeId:(id)a1 logExtra:(id)a2;
+ (void)openCouponPanel:(id)a0 containerView:(id)a1 sessionId:(id)a2;
+ (BOOL)openProductDetail:(id)a0 defaultDetailSchema:(id)a1;
+ (void)selfOpenSkuSchemaWithEventData:(id)a0;
+ (void)scrollComponentToPositionWithEventData:(id)a0 yataInstance:(id)a1 mainCollectionView:(id)a2;
+ (unsigned long long)positionWithString:(id)a0;
+ (BOOL)openSchemaWithParams:(id)a0;
+ (id)URLStrFromMegaURLStr:(id)a0;
+ (id)yataNodeWithMatchVO:(id)a0 yataInstance:(id)a1;
+ (id)subviewWithYataNode:(id)a0 andSliceKey:(id)a1 yataInstance:(id)a2;
+ (void)scrollToTargetSliceView:(id)a0 yataInstance:(id)a1 withAnimation:(BOOL)a2 withSubviewSliceKey:(id)a3 inCollectionView:(id)a4 andOffset:(struct CGPoint { double x0; double x1; })a5 position:(unsigned long long)a6 completion:(id /* block */)a7;
+ (id)subviewWithSliceView:(id)a0 andSliceKey:(id)a1 yataInstance:(id)a2;

@end
