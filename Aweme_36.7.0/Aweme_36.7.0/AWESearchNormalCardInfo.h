@class NSArray, NSString, NSNumber;

@interface AWESearchNormalCardInfo : AWEBaseApiModel

@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *siteName;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSNumber *time;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
