@class UILabel, RichTextView, UIView;

@interface MMFinderLiveFeedStreamCarouselHotCommentCell : MMFinderLiveFeedStreamCarouselCell

@property (retain, nonatomic) UIView *logoCornerView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) double textFWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)onCellDidTap;
- (void)prepareForReuse;
- (void)reload;
- (void)layoutSubviews;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)reportWording;
- (void)endExposeAction;
- (void)setTaskId:(id)a0;
- (void).cxx_destruct;

@end
