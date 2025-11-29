@class NSString;

@interface BDPStarkAppLauncInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) long long launchTime;

- (id)initWithAppID:(id)a0 launchTime:(long long)a1;
- (void).cxx_destruct;

@end
