@class NSMutableArray, BaseResponse;

@interface VoipCSRedirectResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSMutableArray *addrList;

+ (void)initialize;

@end
