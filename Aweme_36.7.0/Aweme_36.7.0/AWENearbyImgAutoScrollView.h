@class UIView, NSArray, NSTimer, NSString, UIScrollView, DUXCarouselIndicator, NSMutableArray;

@interface AWENearbyImgAutoScrollView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) DUXCarouselIndicator *carouselIndicator;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSArray *originViewsModel;
@property (retain, nonatomic) NSMutableArray *cycleImageViews;
@property (nonatomic) double beginOffset;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) long long currIndex;
@property (nonatomic) BOOL resetScrollAction;
@property (retain, nonatomic) NSTimer *scrollTimer;
@property (nonatomic) BOOL initOffset;
@property (nonatomic) BOOL enablePlay;
@property (nonatomic) BOOL playScrollerToPrev;
@property (nonatomic) double playInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startRowAnimation;
- (void)stopRowAnimation;
- (void)setUpUIWithContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)reloadViewsWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)createUIImgViewsWithModel:(id)a0;
- (double)getModWithRight:(BOOL)a0 NumA:(double)a1 NumB:(double)a2;
- (long long)getValidCurrIndexByOffset;
- (long long)getValidIndexNum:(long long)a0;
- (void)configUIImageViewsModels:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1;
- (void)resetRowAnimation;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
