@class NSString, BDImageView;

@interface AWEIMMessageAnimationBubbleView : UIView

@property (retain, nonatomic) NSString *bubbleID;
@property (nonatomic) BOOL isSelfMsg;
@property (retain, nonatomic) BDImageView *topLeftView;
@property (retain, nonatomic) BDImageView *topMidView;
@property (retain, nonatomic) BDImageView *topRightView;
@property (retain, nonatomic) BDImageView *midLeftView;
@property (retain, nonatomic) BDImageView *midRightView;
@property (retain, nonatomic) BDImageView *bottomLeftView;
@property (retain, nonatomic) BDImageView *bottomMidView;
@property (retain, nonatomic) BDImageView *bottomRightView;
@property (nonatomic) BOOL isAnimating;

- (void)configWithModel:(id)a0;
- (BOOL)checkResourceAvailableWith:(id)a0;
- (void)configAnimationView:(id)a0 withBDImage:(id)a1;
- (void)p_setupUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;

@end
