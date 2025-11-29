@class CADisplayLink, MMLiveDisplayLinkAnimator, MMFinderLiveAudienceGoodsCell, PAGFile, UIView, PAGView, UIButton;

@interface MMFinderLiveShopShelfAddProductAnimator : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMLiveDisplayLinkAnimator *displayLinkAnimator;
@property (weak, nonatomic) MMFinderLiveAudienceGoodsCell *cell;
@property (weak, nonatomic) UIButton *targetButton;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *container;
@property (retain, nonatomic) PAGFile *pagFile;
@property (weak, nonatomic) PAGView *pagView;
@property (weak, nonatomic) UIView *imageView;
@property (weak, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct CGPoint { double x; double y; } part2From;
@property (nonatomic) struct CGPoint { double x; double y; } part2To;
@property (nonatomic) double startTime;

- (id)initWithType:(unsigned int)a0 cell:(id)a1 targetView:(id)a2 container:(id)a3;
- (id)initWithType:(unsigned int)a0 cell:(id)a1 targetView:(id)a2 container:(id)a3 pagFile:(id)a4;
- (double)start;
- (void)updateImageViewWithProgress:(double)a0;
- (id)bindKey;
- (void).cxx_destruct;

@end
