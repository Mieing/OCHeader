@class MMUIView, MMUILabel;

@interface MMFinderLiveTableStyleCommentPubbleSignTextCell : MMFinderLiveTableStyleCommentPubbleCell

@property (retain, nonatomic) MMUIView *signBackView;
@property (retain, nonatomic) MMUILabel *signLabel;

- (id)initWithCellFrame:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)signText;
- (void)layoutTouchButton;
- (void)touchButtonClick:(id)a0;
- (void)layoutSignLabel;
- (void)updateSignLabelOrigin;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (id)getSelfAccessibility;
- (void).cxx_destruct;

@end
