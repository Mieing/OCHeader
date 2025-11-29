@class NSData;

@interface VoIPMtCancelInviteMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (retain, nonatomic) NSData *cancelInviteData;

+ (void)initialize;

@end
