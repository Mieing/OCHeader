@class NSString, UIImageView, WCFinderProgressSpritesInfo, NSMutableArray;

@interface WCFinderProgressSpritesView : UIScrollView <UIScrollViewDelegate>

@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WCFinderProgressSpritesInfo *spritesInfo;
@property (retain, nonatomic) NSMutableArray *spriteImages;
@property (nonatomic) BOOL isLoadingImage;
@property (nonatomic) unsigned long long currentShowingSpriteImageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithSpritesInfo:(id)a0;
- (void)setDragPrecent:(double)a0 videoDuration:(double)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;

@end
