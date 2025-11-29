@class NSString, FinderLiveErrorPage, NSData, BaseResponse;

@interface FinderLiveMakeLotteryOrderResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;

+ (void)initialize;

@end
