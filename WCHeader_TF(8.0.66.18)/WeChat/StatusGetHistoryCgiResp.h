@class NSData, NSMutableArray, BaseResponse;

@interface StatusGetHistoryCgiResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *histories;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
