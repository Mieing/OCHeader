@class NSData, NSString;

@interface ClientSessionInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *exploreSessions;
@property (retain, nonatomic) NSString *listeningId;
@property (nonatomic) BOOL isManualRefresh;

+ (void)initialize;

@end
