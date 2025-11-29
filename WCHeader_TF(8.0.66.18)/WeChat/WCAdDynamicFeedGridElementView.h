@class WCMediaItem, WCDataItem, WCImageView;

@interface WCAdDynamicFeedGridElementView : WCAdDynamicFeedEmptyLayoutView

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) WCImageView *imageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementInfo:(id)a1 mediaItem:(id)a2 dataItem:(id)a3 index:(unsigned long long)a4;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)generateGridElement;
- (void)onBackgroundButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
