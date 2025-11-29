@class EcsProductCardMessageModel;

@interface EcsShareToContactLogic_ProductCard : EcsShareToContactLogic_Base

@property (retain, nonatomic) EcsProductCardMessageModel *model;

- (id)initWithParams:(id)a0 extraData:(id)a1;
- (void)genMessage:(id /* block */)a0;
- (void).cxx_destruct;

@end
