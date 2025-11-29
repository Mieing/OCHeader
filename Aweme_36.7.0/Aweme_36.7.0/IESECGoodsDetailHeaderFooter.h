@class NSString, IESECGoodsDetailHeaderSliceModel, IESECSliceAction;

@interface IESECGoodsDetailHeaderFooter : IESECBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECSliceAction *pdpScrollAction;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
