@class UIColor, NSMutableArray;

@interface ACCIntelligentChapterProgressLoadingView : UIView

@property (retain, nonatomic) NSMutableArray *points;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *lines;
@property (nonatomic) double pointSize;
@property (nonatomic) double lineLength;
@property (retain, nonatomic) UIColor *completedColor;
@property (retain, nonatomic) UIColor *pendingColor;

- (id)createLine;
- (id)createLabelWithIndex:(long long)a0;
- (void)updateProgressStage:(long long)a0;
- (void)stopAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
