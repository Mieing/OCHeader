@class DUXBaseLabel, DUXBaseImageView, UIView;

@interface AWESearchCommentCustomBottomBar : UIView

@property (retain, nonatomic) DUXBaseImageView *photoImg;
@property (retain, nonatomic) DUXBaseImageView *contactImg;
@property (retain, nonatomic) DUXBaseImageView *emotionImg;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) DUXBaseLabel *tipsLabel;
@property (copy, nonatomic) id /* block */ inputElementClickedBlock;

- (void)configUI;
- (void)elementClickedAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;

@end
