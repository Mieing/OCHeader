@class MMUIButton;

@interface WCMomentsContactTagSearchBottomBar : UIView

@property (retain, nonatomic) MMUIButton *multiSelectButton;
@property (retain, nonatomic) MMUIButton *cancelMultiSelectButton;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (copy, nonatomic) id /* block */ multiSelectBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ doneBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)updateWithSelectCount:(long long)a0;
- (void)setBottomBarState:(BOOL)a0;
- (void)setSingleSelectState;
- (void)setMultiSelectState;
- (void)onClickMultiSelectButton:(id)a0;
- (void)onClickCancelButton:(id)a0;
- (void)onClickDoneButton:(id)a0;
- (void).cxx_destruct;

@end
