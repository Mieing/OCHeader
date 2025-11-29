@class NSString, FinderWxAppInfo, NSData, NSMutableArray, BaseResponse;

@interface FinderLiveGetShopWindowProductResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSMutableArray *productList;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *shopAppid;
@property (retain, nonatomic) NSString *orderPageUrl;
@property (retain, nonatomic) NSString *shopAddProductUrl;
@property (nonatomic) unsigned int orderCnt;
@property (retain, nonatomic) NSString *shopAddProductAppid;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *orderPageAppid;
@property (retain, nonatomic) NSString *defaultBuyPageAppid;
@property (retain, nonatomic) NSString *defaultBuyPagePath;
@property (retain, nonatomic) NSString *shopExtraData;
@property (retain, nonatomic) NSString *shopWindowId;
@property (retain, nonatomic) NSString *prerenderPagePath;
@property (retain, nonatomic) NSString *shopAppUsername;
@property (retain, nonatomic) NSString *shopAddProductAppusername;
@property (retain, nonatomic) NSString *shopRequestId;
@property (retain, nonatomic) NSMutableArray *preloadCtrlList;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned int isStandardCsAppEnabled;
@property (retain, nonatomic) FinderWxAppInfo *customerServiceApp;

+ (void)initialize;

@end
