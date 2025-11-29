@class NSDictionary, IESECLiveCardAtmosphereView;

@interface IESECLiveSliceAtmosphereView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) IESECLiveCardAtmosphereView *atmosphereView;
@property (copy, nonatomic) NSDictionary *hotSaleStyleDict;
@property (copy, nonatomic) NSDictionary *modelDict;

- (BOOL)setupElementView;
- (void)setupViewsWithContext:(id)a0;
- (id)getHotSaleModelByDict:(id)a0;
- (id)getGoodsAtmosphereModelByDict:(id)a0;
- (id)getHotSaleStyleModelByDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
