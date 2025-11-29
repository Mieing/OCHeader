@class WCFinderSizingRichTextView, UIImageView, UIView, UILabel;

@interface WCFinderCommentImageLongPressRowView : UIView

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) WCFinderSizingRichTextView *titleView;
@property (retain, nonatomic) UIImageView *finderLogo;
@property (retain, nonatomic) UILabel *summaryView;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_doLayout;
- (void)setTitle:(id)a0 coverUrl:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
