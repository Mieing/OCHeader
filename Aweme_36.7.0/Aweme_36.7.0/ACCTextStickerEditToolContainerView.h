@class UIScrollView, NSArray, NSString;
@protocol ACCTextStickerEditToolContainerViewDelegate;

@interface ACCTextStickerEditToolContainerView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *switchScrollView;
@property (retain, nonatomic) NSArray *subviewsArray;
@property (weak, nonatomic) id<ACCTextStickerEditToolContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupUIWith:(id)a0;
- (void)relayoutToolContainerViewWith:(double)a0;
- (void)scrollToToolOption:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 subviewArray:(id)a1;
- (void)relayoutSubviewsWith:(double)a0;
- (void)updateToolOptionToSelect:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
