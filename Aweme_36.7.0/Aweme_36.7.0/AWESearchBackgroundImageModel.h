@class AWEURLModel;

@interface AWESearchBackgroundImageModel : AWEBaseApiModel

@property (nonatomic) long long lightTitleThemeStyle;
@property (retain, nonatomic) AWEURLModel *darkImage;
@property (retain, nonatomic) AWEURLModel *lightImage;
@property (nonatomic) double offset;
@property (nonatomic) double screenWidth;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)lightImageJSONTransformer;
+ (id)darkImageJSONTransformer;

- (void).cxx_destruct;

@end
