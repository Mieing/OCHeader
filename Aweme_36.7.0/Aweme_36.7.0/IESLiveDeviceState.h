@class NSString;

@interface IESLiveDeviceState : NSObject <IESLiveDeviceStateService>

@property BOOL isLandscape;
@property BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)deviceOrientChange;
- (void)startMonitor;

@end
