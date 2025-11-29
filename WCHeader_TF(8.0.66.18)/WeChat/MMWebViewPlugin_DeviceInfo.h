@interface MMWebViewPlugin_DeviceInfo : MMWebViewPluginBase <CNetworkStatusExt, CMobileSIMTypeExt>

@property (nonatomic) long long orientationBeforeSet;
@property (nonatomic) long long orientationSet;
@property (nonatomic) int setFlag;
@property (nonatomic) BOOL bKeepScreenOn;

- (id)init;
- (BOOL)setToOrientation:(long long)a0;
- (void)setDeviceOrientation:(long long)a0;
- (void)setKeepScreenOn:(BOOL)a0;
- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)handleClosePage:(id)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)MobileSIMTypeChange:(unsigned int)a0 reason:(int)a1;
- (void)sendNetworkTypeChangeEvent;

@end
