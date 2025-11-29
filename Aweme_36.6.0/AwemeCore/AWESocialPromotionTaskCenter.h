@interface AWESocialPromotionTaskCenter : NSObject <AWEFamiliarSettingsSubscriber, AWESocialPromotionTaskCenterProtocol, IESLCMessageHandlerService> {
    void /* unknown type, empty encoding */ taskTypeStringMap;
    void /* unknown type, empty encoding */ needCacheTaskTypeList;
}

@property (class, nonatomic, readonly) AWESocialPromotionTaskCenter *sharedCenter;

- (void)updateFamiliarSettings:(id)a0 fromRequest:(BOOL)a1;
- (void)configWith:(id)a0;
- (id)taskByTaskType:(unsigned long long)a0;
- (void)removeTaskByType:(unsigned long long)a0;
- (void)configTaskByType:(unsigned long long)a0 with:(id)a1;
- (unsigned long long)typeByString:(id)a0;
- (id)typeStringByType:(unsigned long long)a0;
- (void)storeCacheSettingIfNeededByType:(unsigned long long)a0 with:(id)a1;
- (id)cacheSettingByType:(unsigned long long)a0;
- (id)settingCacheKeyByType:(unsigned long long)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
