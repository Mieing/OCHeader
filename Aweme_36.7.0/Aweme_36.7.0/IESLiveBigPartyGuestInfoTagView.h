@class UIColor, NSString, UILabel, UIView;

@interface IESLiveBigPartyGuestInfoTagView : UIView

@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) NSString *tagString;
@property (retain, nonatomic) UIColor *tagBgColor;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
