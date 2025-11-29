@interface IESLiveInterativeTimeOutConfig : NSObject

@property (nonatomic) unsigned long long inviteTimeout;
@property (nonatomic) unsigned long long applyTimeout;

+ (id)defaultConfig;

@end
