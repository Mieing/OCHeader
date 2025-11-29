@class AWEUGCrossDiversionInfo, UITapGestureRecognizer, UIImageView, UIView, UIPanGestureRecognizer, DUXBaseLabel;
@protocol AWEUGCrossDiversionBuoyViewDelegate;

@interface AWEUGCrossDiversionBuoyView : UIView

@property (retain, nonatomic) AWEUGCrossDiversionInfo *info;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *closeArea;
@property (retain, nonatomic) UIImageView *closeIconView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isMoving;
@property (weak, nonatomic) id<AWEUGCrossDiversionBuoyViewDelegate> delegate;

- (double)safeAreaBottom;
- (double)defaultYPosition;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)show;
- (void)setupUI;
- (double)safeAreaTop;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)closeButtonTapped;

@end
