@class UILabel, NSMutableAttributedString;

@interface AWETripHeaderTitleLabelView : UIView

@property (retain, nonatomic) UILabel *richLabel;
@property (retain, nonatomic) NSMutableAttributedString *attributedText;

- (void)makeConstraints;
- (void)setTitleAndSubTitleWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)resetContent;

@end
