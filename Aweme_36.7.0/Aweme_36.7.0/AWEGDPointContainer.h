@class NSArray, AWEGDPointCell;
@protocol AWEGDImagePointClickProtocol;

@interface AWEGDPointContainer : UIView

@property (copy, nonatomic) NSArray *pointModels;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEGDPointCell *currentPointCell;
@property (nonatomic) BOOL isDelayShowing;
@property (weak, nonatomic) id<AWEGDImagePointClickProtocol> pointActionDelegate;

- (void)onClickAction;
- (void)bindClickAction;
- (void)showPointCellWithPicIndex:(long long)a0;
- (void)updatePointContainerWith:(id)a0 containerPoint:(id)a1 delayShowTime:(double)a2;
- (void)updatePointContainerWithPicIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })containerPosition;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)containerHeight;
- (double)containerWidth;

@end
