@class NSString, AWEUserPunishLinkContent;

@interface AWEUserPunishRemindInfoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long punishBanType;
@property (retain, nonatomic) AWEUserPunishLinkContent *promptBar;
@property (retain, nonatomic) NSString *punishTitle;
@property (retain, nonatomic) AWEUserPunishLinkContent *punishContent;

+ (id)punishIconJSONTransformer;
+ (id)punishIconDarkJSONTransformer;
+ (id)promptBarJSONTransformer;
+ (id)punishContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
