@class UIColor, NSString, UIView;

@interface AWESettingSwitch : UISwitch <AWESettingSwitchProtocol>

@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIColor *onTintColor;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ chooseBeforeStatusChangeBlock;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
