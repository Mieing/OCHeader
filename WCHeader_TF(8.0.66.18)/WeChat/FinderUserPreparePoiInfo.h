@class NSString;

@interface FinderUserPreparePoiInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int enablePoiManage;
@property (nonatomic) unsigned int hasCompanyVerify;
@property (nonatomic) unsigned int isBrandMerchant;
@property (nonatomic) unsigned int poiManageFirstEnter;
@property (retain, nonatomic) NSString *brandMerchantUrl;

+ (void)initialize;

@end
