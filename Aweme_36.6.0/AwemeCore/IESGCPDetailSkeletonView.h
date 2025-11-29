@class MASConstraint, UIView;

@interface IESGCPDetailSkeletonView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MASConstraint *contentViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *backgroundViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *gameInfoSpacingConstraint;

+ (id)createWhiteSkeletonView;
+ (void)setCornersWithView:(id)a0 radius:(double)a1;
+ (id)whiteFillColor;

- (void)updateContentHeight:(double)a0 topBackgroundHeight:(double)a1 gameInfoSpacing:(double)a2;
- (void)setupRadius:(double)a0 corner:(unsigned long long)a1;
- (id)setupNewHeaderSkeletonView;
- (void)setupBottomContentSkeletonView:(id)a0;
- (id)setupHeaderSkeletonView;
- (id)createGameDetailView;
- (id)createNavBarView;
- (id)blackFillColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
