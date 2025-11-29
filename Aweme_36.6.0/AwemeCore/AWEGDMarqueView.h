@class NSArray, AWEGDMarqueeCell, NSString;

@interface AWEGDMarqueView : UIView <UIScrollViewDelegate, AWEGDImagePointProtocol>

@property (retain, nonatomic) NSArray *marqueeData;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) double itemHeight;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) AWEGDMarqueeCell *curMarqueeCell;
@property (retain, nonatomic) AWEGDMarqueeCell *nextMarqueeCell;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double displayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startScrolling;
- (struct CGSize { double x0; double x1; })calculateContainerSize;
- (double)calculateContainerWidth;
- (void)resetCellPosition;
- (void)updateScrollPosition;
- (void)updateMarqueeData:(id)a0;
- (void)stopScrolling;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToSuperview:(id)a0;
- (void)updateModel:(id)a0;

@end
