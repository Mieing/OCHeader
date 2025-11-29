@class IESECLiveGoodsModel, IESECLiveListOpenRegionModel, IESECLiveGoodsListTopModel, IESECLiveListABConfigModel, IESECLiveListSkinModel, NSString, IESECLiveListCategoryModel, IESECLiveListHeaderModel, IESECLiveListBottomModel, NSArray, NSNumber, IESECLiveListExtraModel, IESECLiveListHintModel;

@interface IESECLiveGoodsListPageModel : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveGoodsModel *intelligentTopPromotion;
@property (retain, nonatomic) IESECLiveListABConfigModel *abConfig;
@property (retain, nonatomic) IESECLiveListHintModel *hint;
@property (retain, nonatomic) IESECLiveListHeaderModel *header;
@property (retain, nonatomic) IESECLiveListBottomModel *bottom;
@property (retain, nonatomic) IESECLiveListCategoryModel *category;
@property (retain, nonatomic) IESECLiveGoodsListTopModel *top;
@property (retain, nonatomic) IESECLiveListOpenRegionModel *openRegionModel;
@property (retain, nonatomic) IESECLiveListSkinModel *skin;
@property (retain, nonatomic) IESECLiveListExtraModel *extra;
@property (nonatomic) long long totalGoodsCount;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSArray *dynamicSlots;
@property (retain, nonatomic) NSNumber *nextOffset;

+ (id)dynamicSlotsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setGoodsList:(id)a0;
- (id)introducingGoodsModel;
- (id)relatedInfoGoodsModel;
- (id)promotionLayout;
- (void)setRelatedInfoGoodsModel:(id)a0;
- (id)recommendGoodsModels;
- (void)setIntroducingGoodsModel:(id)a0;
- (void)setPromotionLayout:(id)a0;
- (id)targetFlashGoodsModels;
- (void)setTargetFlashGoodsModels:(id)a0;
- (void)setRecommendGoodsModels:(id)a0;
- (id)goodsList;
- (void).cxx_destruct;

@end
