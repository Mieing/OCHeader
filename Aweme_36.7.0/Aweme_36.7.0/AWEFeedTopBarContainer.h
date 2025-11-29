@class NSString, AWEHPTopBarContainerConfig, UIView, AWEHPTopBarCTAContainer;
@protocol AWEHPTopBarCTABadgeProtocol;

@interface AWEFeedTopBarContainer : UIView

@property (retain, nonatomic) UIView *leftContainer;
@property (retain, nonatomic) UIView<AWEHPTopBarCTABadgeProtocol> *leftContentView;
@property (retain, nonatomic) UIView *leftEntranceView;
@property (retain, nonatomic) UIView *segmentControlView;
@property (retain, nonatomic) UIView *discoverEntranceView;
@property (retain, nonatomic) AWEHPTopBarContainerConfig *config;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) AWEHPTopBarCTAContainer *topRightContainer;
@property (retain, nonatomic) UIView *discoverEntranceContentView;
@property (nonatomic) unsigned long long dotSceneStyle;
@property (retain, nonatomic) NSString *tempAlphaBizID;
@property (retain, nonatomic) NSString *tempHiddenBizID;
@property (copy, nonatomic) id /* block */ hiddenChangeCallBack;
@property (copy, nonatomic) id /* block */ alphaChangeCallBack;

- (void)didMoveToSuperview;
- (double)leftCTAWidth;
- (double)rightCTAWidth;
- (void)updateDiscoverEntranceViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)addLeftEntrance:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)addEntranceNextToDiscoverEntrance:(id)a0;
- (void)addDiscoverEntranceView:(id)a0;
- (void)setSegmentControlAlpha:(double)a0 fromClass:(Class)a1 selector:(SEL)a2;
- (void)setAlpha:(double)a0 businessID:(id)a1 animateDuration:(id)a2;
- (void)setHidden:(BOOL)a0 businessID:(id)a1;
- (void)updateDotSceneStyle:(unsigned long long)a0;
- (double)segmentControlWidth;
- (void)setSegmentControlTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setSegmentControlUserInteractionEnabled:(BOOL)a0;
- (unsigned long long)getCurrentDotSceneStyle;
- (void)addSegmentControlView:(id)a0;
- (void)setupLeftCTAContainer;
- (void)setupTopRightCTAContainer;
- (void)setSegmentControlAlpha:(double)a0 businessID:(id)a1;
- (void)setSegmentControlHidden:(BOOL)a0 businessID:(id)a1;
- (void)removeLeftEntrance;
- (void)setSegmentControlHidden:(BOOL)a0 fromClass:(Class)a1 selector:(SEL)a2;
- (void)setRightContainerAlpha:(double)a0;
- (void)setupNewUI;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)setAlpha:(double)a0;

@end
