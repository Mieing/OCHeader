@class NSString, AWEUserPunishLinkContent, AWEURLModel;

@interface AWEUserPunishRemindInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL isPunish;
@property (nonatomic) unsigned long long punishBanType;
@property (retain, nonatomic) AWEUserPunishLinkContent *promptBar;
@property (retain, nonatomic) NSString *punishTitle;
@property (retain, nonatomic) AWEURLModel *punishIcon;
@property (retain, nonatomic) AWEURLModel *punishIconDark;
@property (retain, nonatomic) AWEUserPunishLinkContent *punishContent;

+ (id)punishIconJSONTransformer;
+ (id)punishIconDarkJSONTransformer;
+ (id)promptBarJSONTransformer;
+ (id)punishContentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
