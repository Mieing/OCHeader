@class NSString, FinderLiveErrorPage, NSData, BaseResponse;

@interface FinderLivePrepareIncomeEncashResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (retain, nonatomic) FinderLiveErrorPage *errPage;

+ (void)initialize;

@end
