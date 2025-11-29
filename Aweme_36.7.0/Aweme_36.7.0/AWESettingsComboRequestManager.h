@class NSMutableArray;

@interface AWESettingsComboRequestManager : NSObject

@property (retain, nonatomic) NSMutableArray *businessSettingsClassArray;

+ (id)sharedInstance;

- (BOOL)isLaunchCompletionOptimizationEnabled;
- (void)registerBusinessSettingsClass:(Class)a0;
- (id)bizDowngradeSettingsAsyncList;
- (BOOL)bizDowngradeAsyncSettingsDictUpdate;
- (BOOL)bizDowngradeIfAsyncWithClassName:(id)a0;
- (void)sendRequestComboSettings;
- (void)processResponseData:(id)a0 error:(id)a1 settings:(id)a2;
- (void)check_runloopFree:(id /* block */)a0;
- (BOOL)p_saveRespServerTimeIfNeeded:(id)a0;
- (void)fetchComboSettings;
- (void).cxx_destruct;

@end
