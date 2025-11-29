@class NSString, NSData;

@interface MusicLiveHeartbeatReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songid;
@property (retain, nonatomic) NSData *cookie;
@property (nonatomic) BOOL offline;

+ (void)initialize;

@end
