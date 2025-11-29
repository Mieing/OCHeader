@interface IESIMChatSettingsItemSwitchViewModel : IESIMChatSettingsItemBaseInfoViewModel

@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ manualSwitchChanged;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
