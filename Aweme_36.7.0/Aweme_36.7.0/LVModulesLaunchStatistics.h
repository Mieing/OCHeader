@class NSString, NSMutableDictionary;

@interface LVModulesLaunchStatistics : NSObject <LVModulesLaunchStatisticsDeleagte> {
    NSMutableDictionary *_cache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)launchDraft:(id)a0;
- (void)startLaunch:(id)a0 withKey:(id)a1;
- (void)endLaunch:(id)a0 withKey:(id)a1;
- (id)exportDraftData:(id)a0;
- (void)safeLaunchDraft:(id)a0;
- (void).cxx_destruct;
- (void)clear:(id)a0;
- (void)clear;
- (id)init;

@end
