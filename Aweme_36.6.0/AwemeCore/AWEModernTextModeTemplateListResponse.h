@class NSArray;

@interface AWEModernTextModeTemplateListResponse : AWEBaseBizConfigModel

@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *templates;

+ (id)templatesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
