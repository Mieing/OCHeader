@class NSString;

@interface AWEXBridgeInfoService : NSObject <BDXBridgeInfoServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appTheme;
- (BOOL)isTeenMode;
- (id)idfa;
- (BOOL)isBaseMode;
- (id)channel;
- (id)language;
- (id)deviceID;
- (long long)networkQuality;
- (id)settingForKeyPath:(id)a0;

@end
