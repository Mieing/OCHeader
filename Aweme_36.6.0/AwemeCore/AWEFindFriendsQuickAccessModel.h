@class NSString;

@interface AWEFindFriendsQuickAccessModel : AWEBaseSettingsModel

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
