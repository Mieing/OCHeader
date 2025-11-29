@class IESLLLiveAudienceGoodsDetailMPSchemeModel, NSString, IESLLLiveAudienceAnchorItemParamsSchemeModel, NSDictionary, IESLLLiveAudienceGoodsDetailSchemeModel, IESLLLiveAudienceShelfTrackerSchemeModel, IESLLLiveAudienceShelfOpenParamsSchemeModel;

@interface IESLLLiveAudienceSchemeParser : NSObject

@property (retain, nonatomic) IESLLLiveAudienceGoodsDetailSchemeModel *goodsDetailModel;
@property (retain, nonatomic) IESLLLiveAudienceShelfTrackerSchemeModel *shelfTrackerModel;
@property (retain, nonatomic) IESLLLiveAudienceShelfOpenParamsSchemeModel *shelfOpenParamsModel;
@property (retain, nonatomic) IESLLLiveAudienceGoodsDetailMPSchemeModel *goodsDetailMPModel;
@property (nonatomic) BOOL autoOpenLiveLifeAnchorShelf;
@property (nonatomic) BOOL autoOpenLiveLifeShelf;
@property (copy, nonatomic) NSString *saleChannel;
@property (retain, nonatomic) IESLLLiveAudienceAnchorItemParamsSchemeModel *anchorItemParamsModel;
@property (retain, nonatomic) NSDictionary *autoDrawTicketParams;
@property (nonatomic) BOOL hasOpenedDetail;

- (id)initWithLLomParams:(id)a0;
- (void)p_parseParams:(id)a0;
- (void).cxx_destruct;

@end
