@class AWESearchFeelGoodIconBottomModel, AWEURLModel;

@interface AWESearchFeelGoodEntranceIconModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *image;
@property (retain, nonatomic) AWEURLModel *imageDark;
@property (nonatomic) double iconRadius;
@property (copy, nonatomic) AWESearchFeelGoodIconBottomModel *bottom;
@property (nonatomic) double startShowDelayMS;

+ (id)imageJSONTransformer;
+ (id)bottomJSONTransformer;
+ (id)imageDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
