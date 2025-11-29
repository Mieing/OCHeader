@class NSString, CouponAndGiftList, NSMutableArray, BaseResponse;

@interface GetCouponAndGiftListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL isAll;
@property (nonatomic) unsigned long long nextPageNum;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *getMoreList;
@property (retain, nonatomic) CouponAndGiftList *giftItemsList;
@property (retain, nonatomic) CouponAndGiftList *couponItemsList;

+ (void)initialize;

@end
