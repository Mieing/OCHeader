@class NSString, NSArray;

@interface IESGCPSettingFilterRule : NSObject

@property (copy, nonatomic) NSString *ruleKey;
@property (copy, nonatomic) NSArray *ruleValue;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
