@class IESECLiveRecommendModel, IESECVideoRecommendModel, IESECAuthorRecommendModel, IESECGoodsDetailModel, NSString, IESECRecommendFeedbackModel, IESECProductRecommendModel, IESECLynxCardModel, IESECRecommendLynxCardModel, IESECGoodsSeckillModel, IESECActivityRecommendModel, IESECRecommendItemAdInfoModel;

@interface IESECRecommendItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveRecommendModel *liveInfo;
@property (retain, nonatomic) IESECProductRecommendModel *goodsInfo;
@property (nonatomic) long long recommendType;
@property (retain, nonatomic) IESECGoodsSeckillModel *secKillActivity;
@property (retain, nonatomic) IESECRecommendLynxCardModel *lynxModel;
@property (retain, nonatomic) IESECLynxCardModel *lynxCardModel;
@property (retain, nonatomic) IESECActivityRecommendModel *activityInfo;
@property (retain, nonatomic) IESECAuthorRecommendModel *userInfo;
@property (retain, nonatomic) IESECVideoRecommendModel *videoInfo;
@property (retain, nonatomic) IESECGoodsDetailModel *promotion;
@property (copy, nonatomic) NSString *requestLogID;
@property (nonatomic) long long displayRank;
@property (retain, nonatomic) IESECRecommendItemAdInfoModel *adInfo;
@property (nonatomic) BOOL didGYLFromTopImage;
@property (retain, nonatomic) IESECRecommendFeedbackModel *feedbackModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
