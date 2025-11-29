@class NSString;

@interface HearingAidManager : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getLocalMode;
- (unsigned long long)getOldMode;
- (unsigned long long)getRemoteMode;
- (BOOL)setMode:(unsigned long long)a0;
- (BOOL)isOn;
- (BOOL)isXLabEnable;
- (unsigned long long)getHAidDeviceType;
- (void)showAudioInterruptionWording;

@end
