@class NSDictionary, NSString;

@interface BDUGLuckyCustomFaultTagManager : NSObject <BDUGLuckyCustomFaultTagProtocol>

@property (nonatomic) long long counterCreated;
@property (nonatomic) long long counterAppeared;
@property (copy) NSDictionary *activityTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startup;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)onUGPageCreated;
- (void)onUGPageDestroyed;
- (void)onUGPageAppeared;
- (void)onUGPageDisappeared;
- (void)settingsDidUpdateNotification:(id)a0;
- (BOOL)isSmallTraffic:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
