@class FixTitleColorButton, MMUILabel, MMUIButton;

@interface MMFinderLiveQuickReplyViewNavBar : UIView

@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) FixTitleColorButton *rightButton;
@property (copy, nonatomic) id /* block */ actionCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateCompleteButtonState:(BOOL)a0;
- (void)createUI;
- (void)layoutUI;
- (void)layoutTitleView;
- (void)layoutSubTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)onTapDone;
- (void)onTapCancel;
- (void)headerButtonAction:(BOOL)a0;
- (void).cxx_destruct;

@end
