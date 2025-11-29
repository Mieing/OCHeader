@class NSString, AWEURLModel;

@interface AWEAwemeVisionSearchEntryModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *textColor;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
