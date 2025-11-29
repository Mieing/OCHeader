@class NSTimer, DYLoginNextActionButton, AWEUserLoginButtonModel;

@interface AWEUserLoginCustomButtonView : AWEUserLoginButtonView

@property (retain, nonatomic) AWEUserLoginButtonModel *model;
@property (retain, nonatomic) DYLoginNextActionButton *actionButton;
@property (nonatomic) BOOL breathAnimating;
@property (retain, nonatomic) NSTimer *breathTimer;

+ (Class)aAWEUserLoginUIComponentThemeAdapterClass;

- (void)buttonClicked;
- (id)aAWEUserLoginUIComponentThemeAdapter;
- (void)layoutGeneralView;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
