@interface IESLiveAnnouncementSettingSwitchItem : IESLiveAnnouncementSettingBaseItem

@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) id /* block */ valueDidChanged;

- (void).cxx_destruct;
- (Class)cellClass;

@end
