@class NSString;

@interface AWEIMNoticeSubCategoryModel : IESIMBaseApiModel

@property (nonatomic) long long identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *traceParam;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
