@class NSString;

@interface IESIMSwitchService : HTSService <IESIMSwitchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createStandardSwitch;
- (id)createStandardSettingSwitch;
- (id)getSettingSwitch;

@end
