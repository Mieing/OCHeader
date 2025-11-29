@class NSString;

@interface RoamAnalysis : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) unsigned long long msgCount;
@property (nonatomic) unsigned long long mediaCount;
@property (nonatomic) int state;

+ (void)initialize;

@end
