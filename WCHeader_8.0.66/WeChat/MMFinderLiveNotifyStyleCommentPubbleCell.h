@class NSString, RichTextView;

@interface MMFinderLiveNotifyStyleCommentPubbleCell : MMLiveCommentPubbleCell

@property (retain, nonatomic) RichTextView *nickLabel;
@property (retain, nonatomic) NSString *selfAccessibilityStr;

- (id)initWithCellFrame:(id)a0;
- (void)updateBackGroundColor;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (void)layoutNickLabel;
- (void)updateNickLabelOrigin;
- (id)finderPubbleCellFrame;
- (id)getHandledAccessibilityStr:(id)a0;
- (id)getSelfAccessibility;
- (void)updateAccessibility:(id)a0;
- (void)updateSelfAccessibility;
- (void).cxx_destruct;

@end
