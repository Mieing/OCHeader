@class MMTimer, MMFinderLiveSFBarrageCellView, UIView, RichTextView, MMFinderLiveQuickReplyModel;

@interface MMFinderLiveQuickReplyCell : UICollectionViewCell

@property (retain, nonatomic) MMFinderLiveQuickReplyModel *model;
@property (retain, nonatomic) UIView *selectView;
@property (retain, nonatomic) RichTextView *commentTextView;
@property (retain, nonatomic) MMFinderLiveSFBarrageCellView *barrageCellView;
@property (retain, nonatomic) RichTextView *barrageDescTextView;
@property (retain, nonatomic) MMTimer *countdownTimer;

+ (double)cellWidthWithModel:(id)a0 defaultWidth:(double)a1;
+ (double)cellHeightWithModel:(id)a0;
+ (struct CGSize { double x0; double x1; })caculateWithModel:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)updateModel:(id)a0;
- (void)onVisibilityChanged:(BOOL)a0;
- (void)showBorder:(BOOL)a0;
- (id)accessibilityLabel;
- (void)changeCellBackGroundColor:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateBarrageCellViewWithCommentItem:(id)a0;
- (void)initUI;
- (void)layoutUI;
- (void)invalidateCountdownTimer;
- (void)schedulCountdownTimerIfNeeded;
- (void)onTimerFired:(id)a0;
- (void)reloadBarrageDescTextForStayTime;
- (id)getBarrageAccessibility;
- (id)dataModel;
- (void).cxx_destruct;

@end
