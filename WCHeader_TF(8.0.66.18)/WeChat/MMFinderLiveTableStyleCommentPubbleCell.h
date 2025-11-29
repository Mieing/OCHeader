@class NSString;

@interface MMFinderLiveTableStyleCommentPubbleCell : MMLiveCommentPubbleCell <ILinkEventExt>

@property (retain, nonatomic) NSString *signAccessibilityStr;
@property (retain, nonatomic) NSString *selfAccessibilityStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCellFrame:(id)a0;
- (id)finderPubbleCellFrame;
- (void)layoutSubviews;
- (double)maxCornerRadius;
- (void)setCommentLabel:(id)a0;
- (void)layoutCommentLabel;
- (void)updateCommentLabelOrigin;
- (id)getHandledAccessibilityStr:(id)a0;
- (id)getSelfAccessibility;
- (void)updateAccessibility:(id)a0;
- (void)updateSelfAccessibility;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
