@class NSString;

@interface IESLiveRareGiftSettingAPIImpl : HTSLiveApi <IESLiveRareGiftSettingInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRareGiftOn:(BOOL)a0 anchorID:(id)a1 completion:(id /* block */)a2;
- (void)getServerRareGiftSetting:(id)a0 completion:(id /* block */)a1;

@end
