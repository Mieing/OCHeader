@interface MMFinderLiveNotifyStyleTopAreaMsgPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell

- (id)initWithCellFrame:(id)a0;
- (double)maxCornerRadius;
- (void)updateBackGroundColor;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)layoutTouchButton;
- (void)touchButtonClick:(id)a0;
- (BOOL)isUITypeValid;
- (void)updateCommentLabelOrigin;

@end
