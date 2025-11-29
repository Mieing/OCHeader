@class FinderWindowProductInfo_AskForPromoteInfo, NSString, FinderBulkBuyInfo_ProductInfoList, FinderWindowProductInfo_DetailPage, FinderWindowProductInfo_ProductReplayInfo, NSMutableArray, FinderBulkBuyInfo_ShopItem, FinderWindowProductInfo_ProductButtonInfo, ShopItemIDUnit, FinderWindowProductImgButtonInfo;

@interface FinderBulkBuyInfo : WXPBGeneratedMessage <WCFinderLiveLogReportValueProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) ShopItemIDUnit *idUnit;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned int listId;
@property (retain, nonatomic) NSMutableArray *iconUrl;
@property (retain, nonatomic) NSString *titleWording;
@property (retain, nonatomic) NSString *commentWording;
@property (retain, nonatomic) NSString *expireWording;
@property (retain, nonatomic) NSString *progressWording;
@property (retain, nonatomic) NSString *imgUrl;
@property (retain, nonatomic) FinderBulkBuyInfo_ProductInfoList *productList;
@property (retain, nonatomic) NSString *productInfoWording;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *joinButton;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *inviteButton;
@property (retain, nonatomic) FinderWindowProductImgButtonInfo *imgButtonInfo;
@property (retain, nonatomic) FinderWindowProductInfo_ProductReplayInfo *replayInfo;
@property (nonatomic) unsigned int isPromoting;
@property (retain, nonatomic) FinderWindowProductInfo_DetailPage *bulkBuyDetailPage;
@property (retain, nonatomic) FinderBulkBuyInfo_ShopItem *shopItem;
@property (retain, nonatomic) FinderWindowProductInfo_ProductButtonInfo *viewButton;
@property (nonatomic) unsigned int activityStatus;
@property (retain, nonatomic) FinderWindowProductInfo_AskForPromoteInfo *askForPromoteInfo;
@property (retain, nonatomic) NSString *extraReportJson;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

- (id)finderLiveLogReportValueForKey:(id)a0;

@end
