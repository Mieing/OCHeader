@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderLiveAudienceOpFanClubResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL needPurchase;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (nonatomic) BOOL alreadySuperFans;
@property (retain, nonatomic) NSMutableArray *productList;

+ (void)initialize;

@end
