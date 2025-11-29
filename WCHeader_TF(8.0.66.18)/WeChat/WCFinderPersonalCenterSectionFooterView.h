@class RichTextView;

@interface WCFinderPersonalCenterSectionFooterView : UICollectionReusableView

@property (retain, nonatomic) RichTextView *descTextView;
@property (copy, nonatomic) id /* block */ clickActionBlock;

+ (double)footerViewHeightWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setupSubviews;
- (void)clickAction;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
