@class NSString;

@interface SAMICore_VopAudioCheckerOnlineAsrParameter : NSObject

@property (nonatomic) BOOL enableOnlineAsr;
@property (nonatomic) long long language;
@property (retain, nonatomic) NSString *serverUrl;
@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *token;
@property (nonatomic) int connectionTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) float werThreshold;

- (void)dealloc;

@end
