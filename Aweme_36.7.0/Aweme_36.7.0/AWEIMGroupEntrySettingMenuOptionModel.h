@class NSString;

@interface AWEIMGroupEntrySettingMenuOptionModel : IESIMBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *menuShortTitle;
@property (nonatomic) BOOL notRequired;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
