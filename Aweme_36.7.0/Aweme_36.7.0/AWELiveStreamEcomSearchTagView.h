@class UILabel, UIImageView, UIStackView;

@interface AWELiveStreamEcomSearchTagView : UIView

@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *tagTextLabel;
@property (retain, nonatomic) UIImageView *tagIconImage;

- (void)setTagWithText:(id)a0 andIcon:(id)a1 iconIsLeft:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
