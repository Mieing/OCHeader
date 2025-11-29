@class AWESearchSideBarRedDotManager, NSMutableArray, UIView;

@interface AWESearchSideBarTopAreaCell : AWESearchSideBarBaseCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *topButtons;
@property (nonatomic) double totalWidth;
@property (retain, nonatomic) AWESearchSideBarRedDotManager *redDotManager;
@property (nonatomic) BOOL hasRedDot;

+ (id)identifier;

- (void)trackShow;
- (void)setupObserve;
- (void)updateShowtime:(double)a0;
- (void)updateLogExtraDic:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)cellHeight;
- (void)updateWithModel:(id)a0;
- (void)refreshData;

@end
