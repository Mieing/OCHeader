@class NSDictionary;

@interface IESLiveXBridgeLiveIapPayGlobalMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSDictionary *orderInfo;
@property (copy, nonatomic) NSDictionary *error;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
