@protocol IESECSkuBuySchemaModel;

@interface IESECSkuBuyStartupFlowController : IESECStartupFlowController

@property (copy, nonatomic) id /* block */ appendSchema;
@property (retain, nonatomic) id<IESECSkuBuySchemaModel> schemaModel;

- (id)initWithWithAppendSchema:(id /* block */)a0;
- (void)prepareCommonParams;
- (void)appendParamsToSchema;
- (void)doRealOpen;
- (id)parseWithSchema:(id)a0 entranceInfoScene:(id)a1;
- (id)parseWithSchemaParams:(id)a0 entranceInfoScene:(id)a1;
- (void).cxx_destruct;

@end
