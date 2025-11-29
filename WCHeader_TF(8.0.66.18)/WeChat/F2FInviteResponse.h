@class NSString, BaseResponse;

@interface F2FInviteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSString *toUser;
@property (nonatomic) unsigned int syncInterval;
@property (nonatomic) unsigned int delayTime;

+ (void)initialize;

@end
