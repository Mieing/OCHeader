@class CAShapeLayer, UILabel, UIView, UIButton;

@interface AWESearchAIGCImageSelectionHanlderView : UIView

@property (nonatomic) long long index;
@property (nonatomic) BOOL isSmallType;
@property (retain, nonatomic) UIView *indexView;
@property (retain, nonatomic) UILabel *indexLabel;
@property (retain, nonatomic) UIButton *handleViewButton;
@property (retain, nonatomic) CAShapeLayer *roundedRectLayer;
@property (retain, nonatomic) CAShapeLayer *topLeftLayer;
@property (retain, nonatomic) CAShapeLayer *topRightLayer;
@property (retain, nonatomic) CAShapeLayer *bottomLeftLayer;
@property (retain, nonatomic) CAShapeLayer *bottomRightLayer;
@property (nonatomic) BOOL selected;
@property (nonatomic) double originHeight;
@property (copy, nonatomic) id /* block */ clickHandler;

+ (double)unselectionRectRadiusIsSmallType:(BOOL)a0;
+ (double)selectionRectRadiusIsSmallType:(BOOL)a0;
+ (double)unselectionRectMinHeightIsSmallType:(BOOL)a0;
+ (double)selectionRectMinHeightIsSmallType:(BOOL)a0;
+ (double)indexRoundRadiusIsSmallType:(BOOL)a0;

- (id)createLayerWithPath:(id)a0;
- (void)drawSelectionRect;
- (void)updateSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 isSmallType:(BOOL)a2;
- (double)layoutHeightThreshold;
- (double)indexRoundRadius;
- (double)rectMinHeight;
- (void)updateHeightTo:(double)a0;
- (void)setupIndexView;
- (double)selectionRectRadius;
- (double)unselectionRectRadius;
- (id)createRoundedRectLayerWithPath:(id)a0;
- (void)handleViewButtonClick;
- (double)selectionRectMinHeight;
- (double)unselectionRectMinHeight;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)setupUI;

@end
