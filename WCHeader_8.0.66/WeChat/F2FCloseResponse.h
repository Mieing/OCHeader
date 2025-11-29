@class BaseResponse;

@interface F2FCloseResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;

+ (void)initialize;

@end
