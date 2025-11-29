@class WCAdDynamicFeedElementRollTextInfo;

@interface WCAdDynamicLiveDisplayView : WCAdLiveDisplayView

@property (retain, nonatomic) WCAdDynamicFeedElementRollTextInfo *styleInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 isFullCard:(BOOL)a2 styleInfo:(id)a3;
- (void)updateDynamicRollView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
