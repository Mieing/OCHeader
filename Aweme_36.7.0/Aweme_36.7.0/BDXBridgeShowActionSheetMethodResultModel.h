@class BDXBridgeShowActionSheetDetail;

@interface BDXBridgeShowActionSheetMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeShowActionSheetDetail *detail;
@property (nonatomic) long long action;

+ (id)actionJSONTransformer;
+ (id)detailJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
