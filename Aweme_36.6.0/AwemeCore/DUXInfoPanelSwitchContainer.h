@class NSString, DUXSwitch, UILabel, UIView;

@interface DUXInfoPanelSwitchContainer : NSObject <DUXInfoPanelContent>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) DUXSwitch *aswitch;
@property (nonatomic) long long colorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxInfoPanel_view;
- (id)duxInfoPanel_view:(id)a0;
- (id)containerColor;
- (id)initWithText:(id)a0 aswitch:(id)a1;
- (void).cxx_destruct;

@end
