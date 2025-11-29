@class CardSortInfoList, NSString, CardMiniAppInfo, NSMutableArray, BaseResponse;

@interface GetMemberCardHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) NSMutableArray *cardElementCouponList;
@property (retain, nonatomic) CardSortInfoList *cardSortInfoList;
@property (nonatomic) unsigned int isChangeSortRule;
@property (nonatomic) unsigned int changeSortRule;
@property (retain, nonatomic) CardMiniAppInfo *historyMiniAppInfo;
@property (retain, nonatomic) NSString *historyEntranceNameWording;
@property (retain, nonatomic) CardMiniAppInfo *phoneMembercardMiniAppInfo;
@property (retain, nonatomic) NSString *phoneMembercardEntranceNameWording;
@property (retain, nonatomic) NSString *bubbleEntranceNameWording;
@property (retain, nonatomic) NSMutableArray *getMoreList;

+ (void)initialize;

@end
