@class NSString, IESLLLiveAudienceGoodsDetailMPSchemeModel, IESLLLiveAudienceGoodsDetailSchemeModel;

@interface IESLLLiveAudienceShelfOpenParamsSchemeModel : NSObject

@property (copy, nonatomic) NSString *anchorProductId;
@property (retain, nonatomic) IESLLLiveAudienceGoodsDetailSchemeModel *goodsDetail;
@property (retain, nonatomic) IESLLLiveAudienceGoodsDetailMPSchemeModel *goodsDetailMp;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *fromPosition;

- (void)p_parseParams:(id)a0;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
