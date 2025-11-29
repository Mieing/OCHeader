@class AWEURLModel;

@interface AWETeenPendantImagesModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *foldingURL;

+ (id)foldingURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
