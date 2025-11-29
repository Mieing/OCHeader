@interface AWEIMServiceStartTrackManager : NSObject

@property (nonatomic) long long serviceStartReason;

+ (id)sharedInstance;

- (BOOL)recordAndTrackStartReasonViaStackIfNecessary;
- (void)p_fetchReason;
- (id)p_nameOfReason:(long long)a0;
- (id)p_reasonOfFrame:(id)a0;
- (id)init;

@end
