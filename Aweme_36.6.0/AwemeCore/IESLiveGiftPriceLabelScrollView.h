@class NSObject, IESLiveGiftPriceLabelView;
@protocol OS_dispatch_semaphore;

@interface IESLiveGiftPriceLabelScrollView : UIView

@property (retain, nonatomic) IESLiveGiftPriceLabelView *displayView;
@property (retain, nonatomic) IESLiveGiftPriceLabelView *disappearView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightFrame;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *scrollViewSemaphore;
@property (nonatomic) BOOL initFirstDisplay;
@property (copy, nonatomic) id /* block */ getGiftPriceBlock;

- (void)p_showAnimationWithSelectedIndex:(long long)a0 preSelectedIndex:(long long)a1;
- (void)_cancelAllAnimations;
- (void)p_prepareAnimationWithIndex:(long long)a0 preSelectedIndex:(long long)a1;
- (void)selectWithIndex:(long long)a0 withAnimation:(BOOL)a1;
- (void)p_showWithGiftPriceView:(id)a0 index:(long long)a1;
- (id)_obtainGiftPriceWithIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
