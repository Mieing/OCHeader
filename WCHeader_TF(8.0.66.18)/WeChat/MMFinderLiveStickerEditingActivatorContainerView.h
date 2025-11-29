@class MMFinderLiveStickerEditingActivatorView, MMFinderLiveStickerItemBase, UIView, UIViewController;
@protocol MMFinderLiveStickerEditingActivatorContainerViewDelegate, MMFinderLiveStickerReporting;

@interface MMFinderLiveStickerEditingActivatorContainerView : UIView

@property (retain, nonatomic) MMFinderLiveStickerItemBase *imageSticker;
@property (retain, nonatomic) MMFinderLiveStickerEditingActivatorView *imageStickerActivatorView;
@property (retain, nonatomic) MMFinderLiveStickerItemBase *textSticker;
@property (retain, nonatomic) MMFinderLiveStickerEditingActivatorView *textStickerActivatorView;
@property (weak, nonatomic) id<MMFinderLiveStickerEditingActivatorContainerViewDelegate> delegate;
@property (weak, nonatomic) UIViewController *editingVcPresentingViewController;
@property (weak, nonatomic) UIView *actionSheetHostingView;
@property (retain, nonatomic) id<MMFinderLiveStickerReporting> reporter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)upsertStickerItem:(id)a0;
- (void)removeStickerItem:(id)a0;
- (void)sendStickerItemToBack:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)onActivatorViewTapped:(id)a0;
- (void)onActivatorViewDoubleTapped:(id)a0;
- (void).cxx_destruct;

@end
