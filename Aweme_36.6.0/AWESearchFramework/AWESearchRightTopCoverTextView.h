@class AWESearchRightTopCoverTextModel, UIImageView, UILabel;

@interface AWESearchRightTopCoverTextView : UIView

@property (retain, nonatomic) AWESearchRightTopCoverTextModel *model;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;

+ (struct CGSize { double x0; double x1; })coverTextViewSizeWithModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
