@class NSDictionary, IESIMButton, AWEIMCodeGenRemindCreateGroupInfoModel;

@interface IESIMGroupRemindCreateGroupTipsView : UIView

@property (retain, nonatomic) AWEIMCodeGenRemindCreateGroupInfoModel *info;
@property (copy, nonatomic) id /* block */ clickHandler;
@property (retain, nonatomic) IESIMButton *tipsButton;
@property (copy, nonatomic) NSDictionary *settingsConfig;

- (void)updateTipsInfo:(id)a0 clickHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
