@class NSString;

@interface AWEListenFeedContentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *cover;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *scene;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
