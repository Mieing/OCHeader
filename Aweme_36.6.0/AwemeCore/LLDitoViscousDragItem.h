@class UIScrollView, CADisplayLink;
@protocol LLDitoViscousDragItemDelegate_Private;

@interface LLDitoViscousDragItem : NSObject

@property (retain, nonatomic) UIScrollView *viscousDragScrollView;
@property (nonatomic) long long type;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) double supplementInsetBottom;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double preOffsetY;
@property (nonatomic) BOOL ignoreOffsetChanged;
@property (weak, nonatomic) id<LLDitoViscousDragItemDelegate_Private> private_delegate;
@property (nonatomic) BOOL observing;
@property (nonatomic) double dragDistanceOffsetY;
@property (nonatomic) BOOL needLock;
@property (readonly, nonatomic) BOOL viscousDragStart;
@property (readonly, nonatomic) BOOL viscousDragEnd;

+ (long long)typeFromStr:(id)a0;

- (void)panAction:(id)a0;
- (id)initWithViscousDragScrollView:(id)a0 type:(long long)a1;
- (void)removeScrollingEventListening;
- (void)addBouncesContentInset;
- (void)adjustViscousDragScrollView;
- (void)addScrollingEventListening;
- (void)fireDisplayLink;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)displayLinkAction;
- (void)stopDisplayLink;
- (void)didEndScroll;

@end
