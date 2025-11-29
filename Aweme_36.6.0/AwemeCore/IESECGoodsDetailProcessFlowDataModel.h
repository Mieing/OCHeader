@class NSArray, IESECLongContentLabelElement;

@interface IESECGoodsDetailProcessFlowDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECLongContentLabelElement *title;
@property (copy, nonatomic) NSArray *processItem;

+ (id)processItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
