@class AWEHPTabConfigModel, NSString, NSArray;

@interface AWEHPBottomTabConfigModel : AWEBaseApiModel

@property (copy, nonatomic) AWEHPTabConfigModel *tabConfig;
@property (copy, nonatomic) NSString *tabDataHash;
@property (copy, nonatomic) NSArray *tabList;
@property (copy, nonatomic) NSString *landTab;
@property (copy, nonatomic) NSString *mainTab;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
