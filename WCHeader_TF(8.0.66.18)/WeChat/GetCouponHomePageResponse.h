@class CardHomePageStoreList, NSString, CardSortInfoList, CardMiniAppInfo, BaseResponse;

@interface GetCouponHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) CardHomePageStoreList *cardHomePageStoreList;
@property (retain, nonatomic) CardMiniAppInfo *historyMiniAppInfo;
@property (retain, nonatomic) NSString *historyEntranceNameWording;
@property (nonatomic) unsigned int isChangeSortRule;
@property (nonatomic) unsigned int changeSortRule;
@property (retain, nonatomic) CardSortInfoList *cardSortInfoList;

+ (void)initialize;

@end
