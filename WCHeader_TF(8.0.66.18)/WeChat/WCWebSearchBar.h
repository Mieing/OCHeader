@class UIButton, UIView;

@interface WCWebSearchBar : WCSearchBar

@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIView *seperatorView;
@property (nonatomic) BOOL notRespondActionButtonHidden;
@property (nonatomic) BOOL didExposedCancelButton;
@property (nonatomic) BOOL didExposedClearButton;

- (id)initWithConfig:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (id)initWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)assembleSearchButtonWith:(id /* block */)a0;
- (void)assembleRightActionButton:(id)a0;
- (void)assembleRightActionButtonWithoutHidden:(id)a0;
- (void)assembleRightSeperator;
- (void)setActionButtonHidden:(BOOL)a0;
- (void)setActionButtonHiddenImmediately:(BOOL)a0;
- (void)showsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)assembleLargeInputSearchButton;
- (void)switchToLargeInputBox;
- (void)layoutSubviews;
- (id)newTextField;
- (void)showClearButtonSpace:(BOOL)a0;
- (void).cxx_destruct;

@end
