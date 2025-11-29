@class BaseResponse;

@interface PstnShutDownResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;

+ (void)initialize;

@end
