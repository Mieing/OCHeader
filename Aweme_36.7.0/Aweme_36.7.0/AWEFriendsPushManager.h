@class NSString;

@interface AWEFriendsPushManager : NSObject <AWEMotionItemConfigProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)motionItemConfig;
- (BOOL)enableShake;
- (void)didReceiveShakeEvent:(id)a0 error:(id)a1 from:(id)a2;
- (double)shakeTimeInterval;
- (long long)motionLevel;
- (void)showPush:(id)a0;
- (void)showRadarViewWithExtraParams:(id)a0;
- (BOOL)isInActivity;
- (BOOL)isInShakeAD;
- (BOOL)isInNearby;
- (double)radarShakeThreshold;
- (long long)radarShakeMatchCount;
- (double)radarShakeTimeInterval;
- (id)init;
- (void)dealloc;

@end
