@class IESECGCDTimer, IESECLiveCarouselAnimationConfig, UIView;
@protocol IESECLiveCarouselAnimationViewDataSource, IESECLiveCarouselAnimationViewDelegate;

@interface IESECLiveCarouselAnimationView : UIView

@property (weak, nonatomic) UIView *currentItemView;
@property (retain, nonatomic) IESECGCDTimer *animationTimer;
@property (retain, nonatomic) IESECGCDTimer *delayAnimationTimer;
@property (retain, nonatomic) IESECLiveCarouselAnimationConfig *config;
@property (weak, nonatomic) id<IESECLiveCarouselAnimationViewDelegate> delegate;
@property (weak, nonatomic) id<IESECLiveCarouselAnimationViewDataSource> dataSource;
@property (nonatomic) unsigned long long currentIndex;

- (void)p_resetAnimationState;
- (void)p_prepareAnimation;
- (void)p_doAppearAnimation:(BOOL)a0 index:(unsigned long long)a1;
- (unsigned long long)p_numberOfItemsCount;
- (void)p_doDisappearAnimation:(BOOL)a0 index:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)p_itemsViewAtIndex:(unsigned long long)a0;
- (void)itemViewDidAppear:(BOOL)a0;
- (void)itemViewWillAppear:(BOOL)a0;
- (void)itemViewWillDisappear:(BOOL)a0;
- (void)itemViewDidDisappear:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
