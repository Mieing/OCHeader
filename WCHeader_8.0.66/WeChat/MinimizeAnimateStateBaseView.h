@class UIColor, NSString, UIImageView, MinimizeTaskData, UIView;

@interface MinimizeAnimateStateBaseView : UIView

@property (retain, nonatomic) UIImageView *stateIcon;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSString *stateIconName;
@property (retain, nonatomic) UIColor *stateIconColor;
@property (retain, nonatomic) UIView *greenDot;
@property (retain, nonatomic) MinimizeTaskData *taskData;
@property (nonatomic) BOOL foldedView;
@property (nonatomic) unsigned int currentState;

+ (id)genAnimateStateView:(unsigned int)a0 WithGrayBackground:(BOOL)a1 isMiniVersion:(BOOL)a2 withTaskData:(id)a3 foldedView:(BOOL)a4;

- (id)initWithGrayBackground:(BOOL)a0 isMiniVersion:(BOOL)a1;
- (void)initOrUpdateTaskData:(id)a0;
- (void)setStateIconName:(id)a0 color:(id)a1;
- (void)setStateName:(unsigned int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addHighlightPoint;
- (void)removeHighlightPoint;
- (void)shrinkGreenDot:(BOOL)a0;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (void).cxx_destruct;

@end
