@class NSString, SearchOrRecommendItemNew, BusinessDetailInfo, BusinessServiceInfo;

@interface BusinessContactItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) BusinessDetailInfo *detailInfo;
@property (retain, nonatomic) SearchOrRecommendItemNew *contactItem;
@property (retain, nonatomic) BusinessServiceInfo *serviceInfo;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

@end
