@class NSString, NSNumber, AWEIMServiceMsgUpgradeTipsExtra;

@interface AWEIMServiceMsgUpgradeContentTipsTemplate : AWEBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *link;
@property (retain, nonatomic) NSNumber *action;
@property (retain, nonatomic) AWEIMServiceMsgUpgradeTipsExtra *extra;

+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
