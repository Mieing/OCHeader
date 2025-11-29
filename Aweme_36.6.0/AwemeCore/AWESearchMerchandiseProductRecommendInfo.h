@class AWESearchMerchandiseCommentInfo, AWESearchMerchandiseIconRecommendAreaStruct, AWESearchMerchandiseKOLInfo, AWESearchMerchandiseLeaderboard, AWESearchMerchandiseShopInfo, AWESearchMerchandiseUserInfo, AWESearchMerchandiseProductDoubleInfos, AWESearchMerchandiseCommonInfo;

@interface AWESearchMerchandiseProductRecommendInfo : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseCommentInfo *commentInfo;
@property (retain, nonatomic) AWESearchMerchandiseLeaderboard *leaderBoard;
@property (retain, nonatomic) AWESearchMerchandiseKOLInfo *KOLInfo;
@property (retain, nonatomic) AWESearchMerchandiseShopInfo *comparePriceInfo;
@property (retain, nonatomic) AWESearchMerchandiseShopInfo *shopInfo;
@property (retain, nonatomic) AWESearchMerchandiseUserInfo *userInfo;
@property (retain, nonatomic) AWESearchMerchandiseCommonInfo *commonInfo;
@property (retain, nonatomic) AWESearchMerchandiseProductDoubleInfos *doubleCommonInfo;
@property (retain, nonatomic) AWESearchMerchandiseIconRecommendAreaStruct *iconRecommendArea;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
