@class NSMutableDictionary, NSDictionary, IESECGoodsDetailCommonMeta, UIViewController;

@interface IESECGoodsDetailRequestParams : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (weak, nonatomic) UIViewController *presenting;
@property (copy, nonatomic) NSDictionary *rawParams;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ pdpOpenCompletion;
@property (copy, nonatomic) id /* block */ willOpenHalfPage;
@property (copy, nonatomic) id /* block */ willClosePage;
@property (copy, nonatomic) id /* block */ closeHalfPageProgress;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;

- (id)getStringValueFromPath:(id)a0;
- (id)getNumberValueFromPath:(id)a0;
- (id)packApiSchemaV2;
- (void)insertNativeParams;
- (id)getDictionaryValueFromPath:(id)a0;
- (BOOL)getBoolValueFromPath:(id)a0;
- (id)getObjectValueFromPath:(id)a0;
- (void)setValueToPath:(id)a0 value:(id)a1;
- (void)setupWithQueryDict:(id)a0;
- (id)schemaV2JSBridge;
- (void).cxx_destruct;

@end
