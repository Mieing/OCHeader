@class NSString;

@interface AWETrackerEventObserver : NSObject <BDTrackerEventObserver, BDTrackerPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginVersion;
+ (void)onHostEventAccept:(id)a0 params:(id)a1;
+ (id)plugin;

- (void)onEventStored:(id)a0;
- (void)onEventUploaded:(id)a0;
- (void)onEventInitialized:(id)a0;
- (void)onEventDiscarded:(id)a0 withError:(id)a1;
- (id)observerQueue;
- (id)init;

@end
