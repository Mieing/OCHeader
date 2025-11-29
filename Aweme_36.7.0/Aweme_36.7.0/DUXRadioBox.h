@class NSString, UIButton, DUXRadioBoxUIConfigModel;

@interface DUXRadioBox : UIControl <IESIMCheckBoxProtocol>

@property (nonatomic) BOOL checked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) DUXRadioBoxUIConfigModel *uiConfig;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL checked;
@property (copy, nonatomic) NSString *disableText;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;

+ (id)radioboxWithStyle:(unsigned long long)a0;
+ (id)radioboxWithStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1;

- (void)awe_themeReload;
- (id)initWithStyle:(unsigned long long)a0 enlargeType:(unsigned long long)a1;
- (id)_buttonBorderColor;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_buttonBorderWidth;
- (void)onValueChange;
- (double)_buttonAlhpa;
- (void)onCheckboxClick;
- (void)disableButtonHighlightWhenTouched;
- (void).cxx_destruct;
- (id)init;
- (id)initWithStyle:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)layoutSubviews;
- (void)setup;
- (void)setEnabled:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_buttonCornerRadius;
- (id)_buttonBackgroundColor;
- (id)_buttonImage;

@end
