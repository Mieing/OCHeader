@class NSString;

@interface AWERiskPreventModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *advicePhone;
@property (copy, nonatomic) NSString *adviceUrl;
@property (copy, nonatomic) NSString *adviceAgentTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
