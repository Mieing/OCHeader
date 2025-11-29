@class NSString, NSDictionary, IESECEcLiveJumpByClickPromotionModel, IESECLiveGoodsStandardTrackModel, IESECLiveImageURLModel;

@interface IESECEcLiveJumpByClickPromotionModelConvertor : IESECLiveGoodsBaseModel

@property (retain, nonatomic) NSDictionary *liveEventParams;
@property (retain, nonatomic) IESECLiveGoodsStandardTrackModel *standardEventTrackCache;
@property (retain, nonatomic) IESECLiveImageURLModel *coverForDetailCache;
@property (retain, nonatomic) NSString *originIdFromCheck;
@property (retain, nonatomic) NSString *originTypeFromCheck;
@property (retain, nonatomic) IESECEcLiveJumpByClickPromotionModel *promotionModel;

+ (id)convertFromPromotionModel:(id)a0;

- (id)cover;
- (id)promotionID;
- (id)shopID;
- (id)detailURL;
- (id)goodsID;
- (id)bizIdentity;
- (id)checkCallback;
- (id)standardEventTrack;
- (id)coverForDetail;
- (id)leafCategory;
- (BOOL)currentScreenLandscape;
- (BOOL)isSingleSKU;
- (id)toADTrackParamsDictionary;
- (id)parseStandardEventTrack;
- (id)parseCoverForDetail;
- (void).cxx_destruct;
- (long long)channelID;
- (long long)channelType;
- (id)itemType;
- (id)event;
- (long long)status;
- (id)titleString;
- (void)setOriginID:(id)a0;
- (id)originID;
- (id)originType;
- (void)setOriginType:(id)a0;

@end
