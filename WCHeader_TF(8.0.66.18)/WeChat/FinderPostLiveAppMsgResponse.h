@class NSString, NSData, BaseResponse;

@interface FinderPostLiveAppMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned long long serverMsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long serverMsgVersion;
@property (retain, nonatomic) NSString *serverMsgIdStr;
@property (nonatomic) unsigned int statusFlag;
@property (retain, nonatomic) NSData *individualBuffer;

+ (void)initialize;

@end
