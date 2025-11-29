@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicRollTextView : WCAdRollTextView

@property (nonatomic) BOOL didLayoutOnce;
@property (retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleInfo:(id)a1;
- (void)updateDynamicStyle;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
