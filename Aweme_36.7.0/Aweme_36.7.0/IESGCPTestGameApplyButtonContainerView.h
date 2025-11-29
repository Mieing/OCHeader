@class UIButton, NSString;

@interface IESGCPTestGameApplyButtonContainerView : UIView

@property (retain, nonatomic) UIButton *applyButton;
@property (nonatomic) unsigned long long buttonState;
@property (nonatomic) BOOL isApplied;
@property (copy, nonatomic) NSString *testID;
@property (copy, nonatomic) id /* block */ applyButtonClickHandler;

- (void)updateButtonStyleWithThemeConfig:(id)a0;
- (void)makeTrackNode;
- (void)applyButtonDidClick;
- (void)updateButtonState:(unsigned long long)a0 themeConfig:(id)a1 testID:(id)a2;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
