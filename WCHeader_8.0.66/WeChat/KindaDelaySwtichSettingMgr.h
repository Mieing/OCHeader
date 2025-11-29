@class NSString;

@interface KindaDelaySwtichSettingMgr : NSObject <MMDelaySwtichSettingMgr>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setWCPaySettingDelaySwitch:(long long)a0 clearBitMask:(long long)a1;

@end
