@class IESECHeaderSliceAction, IESECSliceAction, IESECGoodsDetailHeaderSliceModel, IESECGoodsDetailHeaderContentCellStyle, IESECGoodsDetailHeaderContentMultiPriview, NSDictionary, IESECGoodsDetailHeaderContentConfig, IESECGoodsDetailHeaderMediaModel, IESECGoodsDetailHeaderLynxModel;

@interface IESECGoodsDetailHeaderContentModel : IESECBaseApiModel

@property (retain, nonatomic) IESECGoodsDetailHeaderMediaModel *media;
@property (retain, nonatomic) IESECGoodsDetailHeaderSliceModel *slice;
@property (retain, nonatomic) IESECGoodsDetailHeaderLynxModel *lynx;
@property (retain, nonatomic) IESECHeaderSliceAction *clickAction;
@property (retain, nonatomic) IESECSliceAction *pdpClickAction;
@property (copy, nonatomic) NSDictionary *trackMeta;
@property (copy, nonatomic) NSDictionary *bizMeta;
@property (nonatomic) double whScale;
@property (nonatomic) double whScaleForHalf;
@property (nonatomic) BOOL showBar;
@property (nonatomic) double topPadding;
@property (nonatomic) double topPaddingHalf;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentConfig *config;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentMultiPriview *multiPreview;
@property (retain, nonatomic) IESECGoodsDetailHeaderContentCellStyle *style;
@property (nonatomic) long long index;
@property (nonatomic) BOOL defaultHide;

+ (id)slicesJSONTransformer;
+ (id)lynxsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
