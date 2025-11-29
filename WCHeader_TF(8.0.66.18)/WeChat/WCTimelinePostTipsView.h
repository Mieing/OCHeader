@class MMUIActivityIndicatorView, UIImageView, WCProgressCircleView, UIView, RichTextView, WCTimelinePostTipsViewModel;

@interface WCTimelinePostTipsView : UIView

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIImageView *checkMarkView;
@property (retain, nonatomic) RichTextView *postTipsView;
@property (retain, nonatomic) MMUIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) WCProgressCircleView *progressCircleView;
@property (retain, nonatomic) WCTimelinePostTipsViewModel *viewModel;

+ (double)heightForViewModel:(id)a0 width:(double)a1;
+ (double)heightForDataItem:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)_initViews;
- (void)initIconView;
- (id)checkMark;
- (void)initPostTipsView;
- (id)postTipsAccessibilityText;
- (void)updateWithDataItem:(id)a0;
- (void)layoutSubviews;
- (void)updateProgress:(double)a0;
- (void).cxx_destruct;

@end
