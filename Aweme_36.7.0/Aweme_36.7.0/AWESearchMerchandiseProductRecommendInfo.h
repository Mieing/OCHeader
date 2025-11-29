@class AWESearchMerchandiseCommentInfo, AWESearchMerchandiseUserInfo, AWESearchMerchandiseKOLInfo, AWESearchMerchandiseProductDoubleInfos, AWESearchMerchandiseCommonInfo, AWESearchMerchandiseIconRecommendAreaStruct, AWESearchMerchandiseShopInfo;

@interface AWESearchMerchandiseProductRecommendInfo : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseCommentInfo *commentInfo;
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
