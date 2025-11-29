@class NSString;

@interface IESLiveGiftGlobalModule : IESLiveModule <IESLiveGiftGlobalModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)giftListInterface;
- (id)baseGiftListInterface;
- (id)giftExtraInfoManagerInterface;
- (id)JSBHandler;
- (BOOL)liveGiftSoundAndVibrationSwitchEnable;
- (id)effectsManagerInterface;
- (id)giftManagerInterface;
- (BOOL)liveGiftPanelNewArchitecture;

@end
