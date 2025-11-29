@class NSString, UISwitch, UITapGestureRecognizer;

@interface DUXSwitch : UIView <IESIMSwitchProtocol, AWESwitchProtocol>

@property (nonatomic, getter=isOn) BOOL on;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (copy, nonatomic) id /* block */ chooseBeforeStatusChangeBlock;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UISwitch *aSwitch;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) struct CGSize { double width; double height; } originSwitchSize;
@property (nonatomic) BOOL isStandardStyle;
@property (nonatomic) double maxScale;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enable;
@property (copy, nonatomic) NSString *disableText;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (copy, nonatomic) id /* block */ valueChangedBlock;
@property (copy, nonatomic) id /* block */ chooseBeforeStatusChangeBlock;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0 disableOpacity:(double)a1;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1 triggerCallback:(BOOL)a2;
- (id)initWithStandard;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithStandard:(BOOL)a0 EnlargeType:(unsigned long long)a1;
- (void)onValueChange;
- (void).cxx_destruct;
- (id)init;
- (void)updateStatus;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)toggleState;
- (void)layoutSubviews;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void)setup;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupView;

@end
