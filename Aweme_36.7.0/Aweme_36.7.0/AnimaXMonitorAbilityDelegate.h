@class AnimaXServiceRegistry, NSMutableDictionary, NSString;

@interface AnimaXMonitorAbilityDelegate : NSObject <AnimaXAnimationListener>

@property (readonly, nonatomic) AnimaXServiceRegistry *serviceRegistry;
@property (nonatomic) void *player;
@property (nonatomic) BOOL hasReportedFirstPlay;
@property (readonly, nonatomic) NSMutableDictionary *platformReportItems;
@property (readonly, nonatomic) double stayDurationStartTimestamp;
@property (nonatomic) double lastPlayReportTimestamp;
@property (nonatomic) long long playCount;
@property (nonatomic) long long playTriggerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlay;
- (void)reportPerformance:(id)a0;
- (void)updateUrl:(id)a0;
- (void)reportOnPlayAndTryTrigger:(BOOL)a0;
- (void)clearPlayCount;
- (void)onRepeat:(id)a0;
- (id)initWithServiceRegistry:(id)a0;
- (void)setAnimaXPlayer:(void *)a0;
- (void)onRelease;
- (void)onPlaySegment;
- (void).cxx_destruct;
- (void)onError:(id)a0;
- (void)onResume;

@end
