@class NSString;

@interface AWESearchResultMultiColumnIconModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *lightUrl;
@property (copy, nonatomic) NSString *darkUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void).cxx_destruct;

@end
