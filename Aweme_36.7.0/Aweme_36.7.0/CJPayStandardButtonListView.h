@class UIButton, NSString, UIView;

@interface CJPayStandardButtonListView : UIView

@property (retain, nonatomic) UIView *horizontalLineView;
@property (retain, nonatomic) UIView *verticalLineView;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSString *sureButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long positiveAlignment;

- (void)p_makeUI;
- (void)p_configButtonTitle:(id)a0 cancelButtonTitle:(id)a1;
- (void)p_configButtonListLayout:(unsigned long long)a0;
- (void)p_configOperateStyleButton;
- (void)p_configDamageStyleButton;
- (void)p_configGuideStyleButton;
- (void)p_configNormalButton;
- (id)initWithSureButtonTitle:(id)a0 cancelButtonTitle:(id)a1;
- (void).cxx_destruct;

@end
