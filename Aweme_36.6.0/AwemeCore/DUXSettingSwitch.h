@class NSString, UIColor;

@interface DUXSettingSwitch : DUXSwitch <IESIMSettingSwitchProtocol, AWESettingSwitchProtocol>

@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) id /* block */ chooseBeforeStatusChangeBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)contentSwitch;
- (id)init;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)sendActionsForControlEvents:(unsigned long long)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
