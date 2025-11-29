@class NSString, NSArray, FinderWindowProductInfo_DetailPage, FinderWindowProductInfo_ProductReplayInfo, FinderLiveShopCustomerServiceInfo, FinderWindowProductInfo_ExclusiveInfo, NSMutableArray, FinderWindowProductInfo;

@interface MMFinderLiveGoodsItem : NSObject <WCFinderLiveLogReportValueProvider, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) FinderWindowProductInfo *finderWindowProductInfo;
@property (readonly, nonatomic) FinderWindowProductInfo *pb;
@property (retain, nonatomic) NSString *platformName;
@property (nonatomic) unsigned long long productId;
@property (nonatomic) unsigned int platformId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) NSArray *imgUrls;
@property (nonatomic) unsigned int stock;
@property (nonatomic) double marketPrice;
@property (nonatomic) double sellingPrice;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL isFlashSale;
@property (retain, nonatomic) NSString *buttonWording;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *halfWxAppPage;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *fullWxAppPage;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *orderAppId;
@property (retain, nonatomic) NSString *orderPath;
@property (retain, nonatomic) NSString *extBuff;
@property (retain, nonatomic) NSString *productExtData;
@property (retain, nonatomic) FinderLiveShopCustomerServiceInfo *csInfo;
@property (nonatomic) BOOL hasRequestUpdateUrl;
@property (retain, nonatomic) NSMutableArray *associatedCoupons;
@property (retain, nonatomic) FinderWindowProductInfo_ExclusiveInfo *exclusiveInfo;
@property (copy, nonatomic) NSArray *iconUrls;
@property (nonatomic) unsigned long long currentLiveId;
@property (retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *productReplayInfo;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *ecSource;

- (id)finderLiveLogReportValueForKey:(id)a0;
- (id)initWithFinderWindowProductInfo:(id)a0;
- (id)initWithFinderWindowProductInfo:(id)a0 currentLiveId:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFromFinderWindowProductInfo:(id)a0;
- (BOOL)hasPromotionReplay;
- (BOOL)hasExclusivePrice;
- (BOOL)enablePromotionReplayImgButton;
- (BOOL)enableAskForPromoteImgButton;
- (BOOL)isImgButtonDisabled;
- (BOOL)isImgButtonNotDisplayed;
- (void).cxx_destruct;

@end
