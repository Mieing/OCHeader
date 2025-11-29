@class NSString, NSMutableArray, BaseResponse;

@interface GetBlackListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *list;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
