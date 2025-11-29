@class NSString;

@interface AWESearchDongCheDiVideoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
