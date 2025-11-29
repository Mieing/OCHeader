@class NSString;

@interface VoIPMPCallSerViceKitParams : WXPBGeneratedMessage

@property (nonatomic) long long callId;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) int roomType;
@property (nonatomic) BOOL isSubCall;

+ (void)initialize;

@end
