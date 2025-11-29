@class UILabel, UIImageView, UIButton;

@interface MMDictationAttachmentEduView : UIView

@property (retain, nonatomic) UILabel *textlabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *doneButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)reloadText;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
