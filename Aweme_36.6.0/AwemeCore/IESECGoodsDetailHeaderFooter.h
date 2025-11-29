@class IESECGoodsDetailHeaderSliceModel, NSString, IESECSliceAction, IESECHeaderSliceAction;

@interface IESECGoodsDetailHeaderFooter : IESECBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECHeaderSliceAction *scrollAction;
@property (retain, nonatomic) IESECSliceAction *pdpScrollAction;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
