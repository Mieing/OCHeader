@class NSString, NSArray;

@interface AWEIMGroupEntrySettingMenuMultiSelectModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *selectTypeTitle;
@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) NSString *selectTitle;
@property (copy, nonatomic) NSString *ruleDescription;
@property (copy, nonatomic) NSArray *selectMenuArray;

+ (id)selectMenuArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
