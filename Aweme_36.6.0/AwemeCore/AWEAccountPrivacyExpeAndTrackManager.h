@interface AWEAccountPrivacyExpeAndTrackManager : NSObject

@property (nonatomic) BOOL isEnable;

+ (Class)aAWEAccountPrivacyTrackManagerAdapterClass;
+ (id)sharedInstance;

- (void)trackBasicModeActionWithType:(unsigned long long)a0;
- (BOOL)isChangePrivacyMode;
- (void)checkIfInDOUYIN;
- (id)aAWEAccountPrivacyTrackManagerAdapter;
- (id)privacyVids;
- (id)init;

@end
