@class IESECGoodsResourceModel, IESECVideoPurchaseSchemaInfoModel, IESECGoodsDetailCustomButtonModel, NSString, IESECGoodsDetailAddressModel, IESECGoodsCommentModel, IESECVideoPriceInfoModel, IESECGoodsDetailMiniVideoModel, IESECGoodsDetailControlModel, IESECGoodsDetailMiscModel, IESECGoodsPOIModel, IESECGoodsDetailDetailModel, NSArray, IESECGoodsDetailAuthorEntriesModel, IESECGoodsPriceInfoModel, IESECGoodsBaseModel, IESECGoodsDetailAdditionModel;

@interface IESECGoodsDetailModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSArray *recommendTags;
@property (readonly, nonatomic) NSArray *recommendTagsWidthValue;
@property (readonly, nonatomic) BOOL goodRatioAsFirstTag;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) NSArray *reverseButtons;
@property (retain, nonatomic) IESECGoodsBaseModel *base;
@property (retain, nonatomic) IESECGoodsDetailAdditionModel *addition;
@property (retain, nonatomic) IESECGoodsCommentModel *comment;
@property (retain, nonatomic) IESECGoodsDetailAuthorEntriesModel *entries;
@property (retain, nonatomic) IESECGoodsDetailDetailModel *detail;
@property (retain, nonatomic) IESECGoodsDetailControlModel *logicControl;
@property (retain, nonatomic) IESECGoodsDetailMiscModel *misc;
@property (retain, nonatomic) IESECGoodsDetailAddressModel *addressInfo;
@property (retain, nonatomic) IESECGoodsPriceInfoModel *priceInfo;
@property (retain, nonatomic) IESECVideoPriceInfoModel *priceInfoV2;
@property (retain, nonatomic) IESECGoodsPOIModel *poiInfo;
@property (retain, nonatomic) NSArray *goodsVideoList;
@property (retain, nonatomic) IESECGoodsDetailMiniVideoModel *miniWindowVideoModel;
@property (retain, nonatomic) IESECGoodsResourceModel *resourceModel;
@property (retain, nonatomic) IESECVideoPurchaseSchemaInfoModel *innerFlowPurchaseSchema;
@property (retain, nonatomic) IESECGoodsDetailCustomButtonModel *customBottomButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonsJSONTransformer;
+ (id)goodsVideoListJSONTransformer;
+ (id)priceInfoV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
