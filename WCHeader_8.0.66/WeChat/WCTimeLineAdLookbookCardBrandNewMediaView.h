@class WCAdLookbookBrandNewItem, MMUIButton;
@protocol WCTimeLineAdLookbookCardBrandNewMediaViewDelegate;

@interface WCTimeLineAdLookbookCardBrandNewMediaView : WCTimeLineAdLookbookCardMediaView

@property (retain, nonatomic) WCAdLookbookBrandNewItem *brandNewItemInfo;
@property (retain, nonatomic) MMUIButton *coverButton;
@property (weak, nonatomic) id<WCTimeLineAdLookbookCardBrandNewMediaViewDelegate> brandNewMediaDelegate;

- (void)generateInitialSubviews;
- (void)layoutSubviews;
- (id)generateSightViewWithMediaData:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dataItem:(id)a2 bTimelineScene:(BOOL)a3;
- (void)onCoverButtonClicked:(id)a0;
- (void)setBrandNewMediaHighlighted:(BOOL)a0;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void).cxx_destruct;

@end
