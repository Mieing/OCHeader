@class NSString, UISwitch;

@interface DiscoverEntranceSetSwitchInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL isOn;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) UISwitch *uiSwitch;

- (void).cxx_destruct;

@end
