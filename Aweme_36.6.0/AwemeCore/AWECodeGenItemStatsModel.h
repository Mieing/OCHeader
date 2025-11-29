@class NSString, NSDictionary;

@interface AWECodeGenItemStatsModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *stats;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
