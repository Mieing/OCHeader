@class BDPUniqueID;

@interface BDPSensitiveAPIUtil : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (nonatomic) BOOL enterBackground;

+ (void)bootstrapLaunch;
+ (id)shareInstance;

- (void)sensitive_eventWithPermission:(id)a0;
- (void)onApplicationEnterBackground:(id)a0;
- (void)onApplicationEnterForeground:(id)a0;
- (void)_apiSensitiveTrackerWithName:(id)a0 status:(long long)a1;
- (void)cancelSensitiveReport;
- (void)sensitive_eventWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
