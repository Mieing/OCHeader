@class UIImageView, MMUIView, MMUILabel;

@interface MMFinderLiveTableStyleCommentPubbleSubscribeCell : MMFinderLiveTableStyleCommentPubbleCell

@property (retain, nonatomic) MMUIView *signBackView;
@property (retain, nonatomic) MMUILabel *signLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)initWithCellFrame:(id)a0;
- (BOOL)isUITypeValid;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)signText;
- (void)layoutSignLabel;
- (void)updateSignLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutArrowImageView;
- (void)updateArrowImageViewOrigin;
- (double)getArrowImageWidth;
- (double)getArrowImageHeight;
- (id)getSelfAccessibility;
- (void).cxx_destruct;

@end
