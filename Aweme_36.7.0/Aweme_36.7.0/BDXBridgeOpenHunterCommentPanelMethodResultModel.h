@class NSString, NSDictionary;

@interface BDXBridgeOpenHunterCommentPanelMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *resultText;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) long long closeMethod;

+ (id)closeMethodJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
