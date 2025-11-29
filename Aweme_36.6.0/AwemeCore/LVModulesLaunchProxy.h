@class NSString, LVModulesLaunchStatistics, LVModulesLaunchExport;

@interface LVModulesLaunchProxy : NSObject <LVModulesLaunchStatisticsDeleagte, LVModulesLaunchExportDelegate> {
    LVModulesLaunchStatistics *_statistics;
    LVModulesLaunchExport *_export;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)exportDraft:(id)a0 confirm:(BOOL)a1;
- (void)launchDraft:(id)a0;
- (void)startLaunch:(id)a0 withKey:(id)a1;
- (void)endLaunch:(id)a0 withKey:(id)a1;
- (id)exportDraftData:(id)a0;
- (void).cxx_destruct;
- (void)clear:(id)a0;
- (void)clear;
- (id)init;

@end
