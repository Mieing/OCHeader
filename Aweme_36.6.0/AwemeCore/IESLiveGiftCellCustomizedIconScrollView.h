@class NSObject, NSArray, IESLiveGiftCellCustomizedIconView;
@protocol OS_dispatch_semaphore;

@interface IESLiveGiftCellCustomizedIconScrollView : UIView

@property (retain, nonatomic) IESLiveGiftCellCustomizedIconView *displayView;
@property (retain, nonatomic) IESLiveGiftCellCustomizedIconView *disappearView;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightFrame;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *scrollViewSemaphore;
@property (nonatomic) BOOL initFirstDisplay;
@property (nonatomic) BOOL disableUpdateCardIndex;
@property (copy, nonatomic) id /* block */ getIconModelBlock;
@property (copy, nonatomic) NSArray *giftCellImageInfoList;

- (void)refreshImage;
- (void)p_showWithGiftCellView:(id)a0 index:(long long)a1;
- (void)p_showAnimationWithSelectedIndex:(long long)a0 preSelectedIndex:(long long)a1;
- (void)_cancelAllAnimations;
- (void)p_prepareAnimationWithIndex:(long long)a0 preSelectedIndex:(long long)a1;
- (id)_obtainIconModelWithIndex:(long long)a0;
- (void)selectWithIndex:(long long)a0 withAnimation:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
