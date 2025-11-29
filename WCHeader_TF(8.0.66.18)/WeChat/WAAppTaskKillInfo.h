@class NSString;

@interface WAAppTaskKillInfo : NSObject

@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int killReason;
@property (nonatomic) unsigned long long killTimeStampInMs;

- (void).cxx_destruct;

@end
