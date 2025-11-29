@class NSArray;

@interface IESECGoodsDetailImagesDataModel : IESECBaseApiModel

@property (retain, nonatomic) NSArray *imageItemArray;

+ (id)imageItemArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
