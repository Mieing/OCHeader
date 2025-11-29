@class NSArray, NSTimer, NSString, NSMutableArray;

@interface AWEConcernGoodsCardBlurCommentView : UIView <AWEConcernGoodsCardCommentViewProtocol>

@property (copy, nonatomic) NSArray *comments;
@property (retain, nonatomic) NSMutableArray *commentViews;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long maxDisplayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewLayout;
- (void)__updateHeightWithCount:(long long)a0;
- (void)startRowAnimation;
- (void)updateDataWithItems:(id)a0;
- (void)pauseRowAnimation;
- (void)resumeRowAnimation;
- (void)configWithGoodModel:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
