@interface BrandDirectlyOperateContactLogic : NSObject <PBMessageObserverDelegate>

- (void)cancelFocusBrandContact:(id)a0;
- (void)tryAddBrandContact:(id)a0 context:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
