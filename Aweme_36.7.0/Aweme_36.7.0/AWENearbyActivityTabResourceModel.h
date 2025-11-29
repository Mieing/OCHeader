@class NSString, AWENearbyActivityTextStyleModel, AWEURLModel;

@interface AWENearbyActivityTabResourceModel : AWEBaseApiModel

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) AWEURLModel *urls;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWENearbyActivityTextStyleModel *textStyle;

+ (id)urlsJSONTransformer;
+ (id)textStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
