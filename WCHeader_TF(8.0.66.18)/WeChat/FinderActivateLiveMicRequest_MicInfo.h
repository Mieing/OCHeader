@class NSString;

@interface FinderActivateLiveMicRequest_MicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isVideoEnabled;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) unsigned int seatId;

+ (void)initialize;

@end
