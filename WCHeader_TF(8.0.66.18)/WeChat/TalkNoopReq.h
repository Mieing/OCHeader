@class BaseRequest;

@interface TalkNoopReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
