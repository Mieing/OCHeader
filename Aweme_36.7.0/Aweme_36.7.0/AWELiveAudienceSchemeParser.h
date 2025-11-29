@class AWELiveAudienceGoodsDetailSchemeModel, AWELiveAudienceShelfTrackerSchemeModel, NSString, AWELiveAudienceGoodsDetailMPSchemeModel, AWELiveAudienceShelfOpenParamsSchemeModel, AWELiveAudienceAnchorItemParamsSchemeModel, NSDictionary;

@interface AWELiveAudienceSchemeParser : NSObject

@property (retain, nonatomic) AWELiveAudienceGoodsDetailSchemeModel *goodsDetailModel;
@property (retain, nonatomic) AWELiveAudienceShelfTrackerSchemeModel *shelfTrackerModel;
@property (retain, nonatomic) AWELiveAudienceShelfOpenParamsSchemeModel *shelfOpenParamsModel;
@property (retain, nonatomic) AWELiveAudienceGoodsDetailMPSchemeModel *goodsDetailMPModel;
@property (nonatomic) BOOL autoOpenLiveLifeAnchorShelf;
@property (nonatomic) BOOL autoOpenLiveLifeShelf;
@property (copy, nonatomic) NSString *saleChannel;
@property (retain, nonatomic) AWELiveAudienceAnchorItemParamsSchemeModel *anchorItemParamsModel;
@property (retain, nonatomic) NSDictionary *autoDrawTicketParams;
@property (nonatomic) BOOL hasOpenedDetail;

- (id)initWithLLomParams:(id)a0;
- (void)p_parseParams:(id)a0;
- (void).cxx_destruct;

@end
