@class NSString;

@interface SideInfo_VoiceButton : WXPBGeneratedMessage

@property (nonatomic) long long pressTsMs;
@property (nonatomic) long long releaseTsMs;
@property (retain, nonatomic) NSString *clientMsgid;

+ (void)initialize;

@end
