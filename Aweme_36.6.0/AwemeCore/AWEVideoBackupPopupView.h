@class UIImageView, UILabel, UIView, AWEAnimatedButton;

@interface AWEVideoBackupPopupView : UIView

@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) AWEAnimatedButton *confirmButton;
@property (retain, nonatomic) AWEAnimatedButton *cancelButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (copy, nonatomic) id /* block */ confirmAction;
@property (copy, nonatomic) id /* block */ cancelAction;

- (void)didClickConfirmButton:(id)a0;
- (void)didClickCancelButton:(id)a0;
- (void)setupCover:(id)a0;
- (BOOL)isStyleOne;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
