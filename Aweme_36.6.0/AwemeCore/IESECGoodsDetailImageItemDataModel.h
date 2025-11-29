@class NSString, IESECImageBoxElement, IESECGoodsDetailDetailImageMoreInfo;

@interface IESECGoodsDetailImageItemDataModel : IESECBaseApiModel

@property (retain, nonatomic) IESECImageBoxElement *image;
@property (copy, nonatomic) NSString *imageType;
@property (retain, nonatomic) IESECGoodsDetailDetailImageMoreInfo *moreInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
