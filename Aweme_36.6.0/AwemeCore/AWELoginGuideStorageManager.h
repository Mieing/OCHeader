@interface AWELoginGuideStorageManager : NSObject

+ (id)shareManager;

- (id)storageOfScene:(id)a0;
- (id)storageKeyForScene:(id)a0;
- (id)storageOfSceneType:(long long)a0 methodType:(long long)a1;
- (id)storageKeyForSceneType:(long long)a0 methodType:(long long)a1;
- (void)logForScene:(id)a0 message:(id)a1;
- (id)updateStorageForScene:(id)a0;
- (void)recordShowOfScene:(id)a0;
- (void)recordSkipOfScene:(id)a0;
- (void)updateSkipDateOfScene:(id)a0 date:(id)a1;
- (void)recordFailOfScene:(id)a0;
- (void)updateFailDateOfScene:(id)a0 date:(id)a1;
- (void)resetNewPeriodOfScene:(id)a0;
- (void)resetSkipOfScene:(id)a0;
- (void)resetFailOfScene:(id)a0;
- (void)resetPeriodShowCountOfScene:(id)a0;

@end
