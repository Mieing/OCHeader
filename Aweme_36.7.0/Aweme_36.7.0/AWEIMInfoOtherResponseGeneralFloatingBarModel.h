@class NSString;

@interface AWEIMInfoOtherResponseGeneralFloatingBarModel : IESIMBaseApiModel

@property (nonatomic) unsigned long long barType;
@property (copy, nonatomic) NSString *barText;
@property (copy, nonatomic) NSString *btnText;
@property (copy, nonatomic) NSString *btnAction;
@property (nonatomic) long long updateTimestamp;

+ (id)barTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
