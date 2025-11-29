@class NSArray;

@interface BDXBridgeAccountGetHistoryUserInfoMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *response;
@property (nonatomic) long long code;

+ (id)responseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
