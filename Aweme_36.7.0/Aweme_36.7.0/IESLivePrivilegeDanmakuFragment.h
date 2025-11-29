@class IESLivePrivilegeDanmakuSettingViewModel, IESLivePrivilegeDanmakuSettingItem, NSString, IESLivePrivilegeDanmakuSettingView, IESLivePrivilegeDanmakuSwitchViewModel;

@interface IESLivePrivilegeDanmakuFragment : IESLiveRoomComponent <IESLivePrivilegeModulePrivilegeDanmakuInterface>

@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *settingViewModel;
@property (weak, nonatomic) IESLivePrivilegeDanmakuSettingView *settingView;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingItem *settingItem;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSwitchViewModel *switchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (id)createDanmakuSettingViewWithLandscape:(BOOL)a0 style:(long long)a1;
- (void)updatePrivilegeDanmakuTabWithCompletion:(id /* block */)a0;
- (id)createDanmakuSwitchView;
- (void)bindData;
- (void)cleanDanmakuTabData;
- (void)updatePrivilegeDanmakuTab;
- (void).cxx_destruct;

@end
