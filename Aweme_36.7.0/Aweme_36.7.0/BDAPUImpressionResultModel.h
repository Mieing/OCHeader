@class NSString;

@interface BDAPUImpressionResultModel : BDXBridgeModel

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *result;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCode:(long long)a0 result:(id)a1;
- (void).cxx_destruct;

@end
