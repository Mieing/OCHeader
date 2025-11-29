@class NSDictionary, NSString;

@interface TTrackerPriorityManager : NSObject <BDTrackerPlugin, TTrackerPriorityObserver, BDTrackerRemoteSettingsObserver> {
    NSDictionary *priorityUploaders;
}

@property (nonatomic) long long priorityVersion;
@property (nonatomic) double baseInterval;
@property (nonatomic) BOOL ignorePriority;
@property (nonatomic) BOOL priorityAvailable;
@property (copy) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginVersion;
+ (id)plugin;

- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)applyPrioritySettingsIfNeed:(id)a0 source:(id)a1;
- (void)onDeviceDidRegistered;
- (void)applyDowngradeStrategy:(id)a0;
- (long long)priorityForEvent:(id)a0 type:(id)a1;
- (void)onRemoteSettingsUpdated:(id)a0;
- (void)trackEvent:(id)a0 withType:(id)a1 realtime:(BOOL)a2;
- (id)filePath;
- (void).cxx_destruct;
- (void)handleResponse:(id)a0;
- (id)init;
- (void)commonInit;
- (void)reset;
- (void)loadData;

@end
