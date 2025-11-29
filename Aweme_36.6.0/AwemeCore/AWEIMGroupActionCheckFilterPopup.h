@class NSString, NSArray;

@interface AWEIMGroupActionCheckFilterPopup : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *titleIconLight;
@property (copy, nonatomic) NSString *titleIconDark;
@property (copy, nonatomic) NSString *actionDesc;
@property (copy, nonatomic) NSArray *actionRuleList;

+ (id)actionRuleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
