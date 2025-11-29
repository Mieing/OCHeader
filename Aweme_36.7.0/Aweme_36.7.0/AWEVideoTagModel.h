@class NSString, NSNumber, AWEURLModel;

@interface AWEVideoTagModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (nonatomic) long long tagType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) AWEURLModel *iconImageURL;
@property (retain, nonatomic) NSNumber *leftRightPadding;

+ (id)iconImageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
