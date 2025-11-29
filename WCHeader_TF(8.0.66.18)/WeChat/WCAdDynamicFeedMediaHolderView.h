@class WCDataItem, WCMediaItem;

@interface WCAdDynamicFeedMediaHolderView : WCAdDynamicFeedEmptyLayoutView

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCMediaItem *mediaItem;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementInfo:(id)a1 dataItem:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resetSubViews;
- (void).cxx_destruct;

@end
