@class NSArray, IESLiveGameInteractStickerCommonLiveInfoLineDisplayView, NSTimer;

@interface IESLiveGameInteractStickerCommonCarouselDisplayView : UIView

@property (copy, nonatomic) NSArray *liveInfoList;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) IESLiveGameInteractStickerCommonLiveInfoLineDisplayView *topView;
@property (retain, nonatomic) IESLiveGameInteractStickerCommonLiveInfoLineDisplayView *bottomView;
@property (retain, nonatomic) NSTimer *timer;

- (void)startCarousel;
- (void)stopCarousel;
- (void)carouselLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveInfoList:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
