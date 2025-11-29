@class MMLiveCommentDataItem, MMLiveCommentPubbleCellFrame, UIColor, RichTextView, MMUIButton;

@interface MMLiveCommentPubbleCell : MMLiveCommentPubbleView

@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;
@property (retain, nonatomic) MMLiveCommentPubbleCellFrame *cellFrame;
@property (retain, nonatomic) RichTextView *commentLabel;
@property (nonatomic) BOOL isTop;
@property (nonatomic) long long section;
@property (nonatomic) BOOL isNoticeSection;
@property (copy, nonatomic) id /* block */ touchButtonBlock;
@property (copy, nonatomic) id /* block */ contentLinkClickCallback;
@property (retain, nonatomic) MMUIButton *touchButton;
@property (retain, nonatomic) UIColor *customBackgroundColor;
@property (nonatomic) BOOL isCommentTableTopState;

+ (double)standardLiveCommentPubbleCellHeight;
+ (double)liveCommentPubbleCellToCellMargin;

- (id)initWithCellFrame:(id)a0;
- (BOOL)reuseWithCellFrame:(id)a0;
- (double)maxCornerRadius;
- (void)layoutSubviews;
- (void)layoutUI;
- (BOOL)isUITypeValid;
- (void)updateBackGroundColor;
- (void)beginTopInCommentTable;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)a0;
- (id)getCommentItem;
- (unsigned long long)getContentLineNum;
- (id)getRectValueForBaseStyle:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)updatePubbleCellAlpha;
- (void)scrollViewDidScroll:(id)a0;
- (void)commentPubbleCellEndToTop:(id)a0;
- (void)commentPubbleCellBeginNew:(id)a0;
- (void)updateCellAlphaWithNotification:(id)a0;
- (void)updateCellAlphaWithTopSectionOffset:(double)a0 scrollViewOffSet:(double)a1 changeBGColorOffset:(double)a2 currentHeight:(double)a3;
- (void)updateCellBackgroundColorWithNotification:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
