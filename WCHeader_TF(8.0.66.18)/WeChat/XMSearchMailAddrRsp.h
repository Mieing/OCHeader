@class NSMutableArray, BaseResponse;

@interface XMSearchMailAddrRsp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contacts;

+ (void)initialize;

@end
