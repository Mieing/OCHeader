@class NSString, NSMutableArray, BaseResponse;

@interface GetBankResourceRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *bankresourcelist;
@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *bankDetailUrl;

+ (void)initialize;

@end
