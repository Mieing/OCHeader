@class IESECStorePageContext;

@interface IESECShopProductsPlayableAreaCoordinator : NSObject

@property (retain, nonatomic) IESECStorePageContext *context;
@property (nonatomic) double areaPercentage;
@property (nonatomic) double overflowPercentage;

- (BOOL)viewInPlayableArea:(id)a0;
- (BOOL)exceedsPlayableArea:(id)a0;
- (BOOL)exceedsLynxPlayableAreaWithCell:(id)a0 name:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playableArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lynxPlayableArea;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
