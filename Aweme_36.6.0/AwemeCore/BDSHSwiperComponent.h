@class NSTimer, NSMutableArray, UIScrollView;

@interface BDSHSwiperComponent : BDSHViewComponent

@property (retain, nonatomic) NSTimer *autoPlayTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL needResetTimer;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double duration;
@property (nonatomic) double interval;
@property (nonatomic) BOOL circular;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) BOOL touchable;
@property (nonatomic) long long direction;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)updateRenderData;
- (void)updateDirection:(int)a0;
- (void)setupChildrenFrame;
- (void)updateChildrenFrame:(BOOL)a0;
- (void).cxx_destruct;
- (void)resetTimer;
- (id)contentView;
- (void)dealloc;
- (void)setupScrollView;
- (void)updateCurrentIndex;

@end
