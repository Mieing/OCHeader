@class BDXBridgeTtcjpayIABResultDict;

@interface CJPayXBridgeTtcjpayIABMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) BDXBridgeTtcjpayIABResultDict *resultDict;

+ (id)resultDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
