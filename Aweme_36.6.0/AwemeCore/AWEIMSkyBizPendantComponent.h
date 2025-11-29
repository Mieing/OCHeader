@class NSString;
@protocol AWEIMSkylightCellPendantInterface;

@interface AWEIMSkyBizPendantComponent : AWEIMSkylightBaseComponent <AFDCloseFriendsMessage>

@property (nonatomic) BOOL momentUserSettingDisabled;
@property (weak, nonatomic) id<AWEIMSkylightCellPendantInterface> pendantInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)closeFriendsDidUpdatedUserSetting:(BOOL)a0;
- (void)updateComponentAfterModelUpdate;
- (void)p_updateBusinessDot;
- (void).cxx_destruct;
- (void)dealloc;

@end
