@class MMLiveCommentDataItem, MMGroupLiveCommentTableViewCellFrame, RichTextView, MMHeadImageView;

@interface MMGroupLiveCommentPubbleView : MMLiveCommentPubbleView

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) RichTextView *commentLabel;
@property (retain, nonatomic) MMGroupLiveCommentTableViewCellFrame *cellFrame;
@property (retain, nonatomic) MMLiveCommentDataItem *commentItem;

+ (double)maxDisplayLabelWidthForComment:(id)a0;
+ (double)maxDisplayLabelWidthForComment:(id)a0 inCommentPubbleMaxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeForComment:(id)a0 inCommentPubbleMaxWidth:(double)a1 withArrStyles:(id *)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void).cxx_destruct;

@end
