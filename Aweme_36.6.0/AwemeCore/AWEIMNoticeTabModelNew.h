@class NSString, NSArray;

@interface AWEIMNoticeTabModelNew : IESIMBaseApiModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSArray *noticeTabs;

+ (id)noticeTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
