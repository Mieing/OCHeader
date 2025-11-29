@class IESLivePrivilegeDanmakuSettingViewModel, IESLivePrivilegeDanmakuSwitch;

@interface IESLivePrivilegeDanmakuSwitchViewModel : NSObject

@property (weak, nonatomic) IESLivePrivilegeDanmakuSwitch *view;
@property (nonatomic) BOOL switchOn;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *settingViewModel;

- (void)bindObserver;
- (void)updateSwitchAction;
- (void).cxx_destruct;
- (id)init;

@end
