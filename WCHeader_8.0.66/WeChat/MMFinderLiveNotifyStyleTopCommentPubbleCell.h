@class UIScrollView, MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer, UIView;

@interface MMFinderLiveNotifyStyleTopCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

@property (retain, nonatomic) MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer *labelContainer;
@property (retain, nonatomic) UIScrollView *commentScrollView;
@property (retain, nonatomic) UIView *scrollViewContainerView;

- (id)initWithCellFrame:(id)a0;
- (void)layoutSubviews;
- (void)layoutScrollViewAndCommentLabel;
- (double)getFirstLineBottom;
- (void)updateCommentLabelOrigin;
- (void)layoutNickLabel;
- (void)updateNickLabelOrigin;
- (void)layoutLabelContainer;
- (id)createGradientLayer;
- (BOOL)isLiveAnchorNotice;
- (void).cxx_destruct;

@end
