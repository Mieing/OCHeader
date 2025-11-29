@class NSString, NSURL, AWEYAPOriginEntranceContext;

@interface AWEYAPEntranceContext : NSObject

@property (nonatomic) long long reEnterStatus;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSURL *entranceURL;
@property (copy, nonatomic) NSString *launchType;
@property (copy, nonatomic) NSString *entranceType;
@property (retain, nonatomic) AWEYAPOriginEntranceContext *originContext;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) double entranceInvokeTimestamp;
@property (nonatomic) double appLaunchTimestamp;

- (BOOL)isFromAppClip:(id)a0;
- (void)updateWithIsColdLaunch:(BOOL)a0 launchType:(id)a1;
- (id)userActivity;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToContext:(id)a0;

@end
