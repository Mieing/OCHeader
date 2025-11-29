@class WCFinderAuthorContactViewStyle, WCFinderHeadImageView, WCFinderAuthInfoIconView, UILabel, RichTextView;

@interface WCFinderAuthorContactView : UIView

@property (retain, nonatomic) WCFinderHeadImageView *headImgView;
@property (retain, nonatomic) RichTextView *nameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) WCFinderAuthorContactViewStyle *style;
@property (retain, nonatomic) UILabel *authProfessionLabel;
@property (nonatomic) double nsFWidth;

+ (double)viewHeightWithStyle:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(id)a1;
- (void)setupUI;
- (void)setFWidth:(double)a0;
- (void)updateWithContact:(id)a0;
- (void)layoutUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
