@class NSString, AWELiveAudienceGoodsDetailSchemeModel, AWELiveAudienceGoodsDetailMPSchemeModel;

@interface AWELiveAudienceShelfOpenParamsSchemeModel : NSObject

@property (copy, nonatomic) NSString *anchorProductId;
@property (retain, nonatomic) AWELiveAudienceGoodsDetailSchemeModel *goodsDetail;
@property (retain, nonatomic) AWELiveAudienceGoodsDetailMPSchemeModel *goodsDetailMp;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *fromPosition;

- (void)p_parseParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
