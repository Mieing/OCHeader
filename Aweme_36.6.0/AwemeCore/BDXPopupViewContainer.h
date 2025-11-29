@class UIView;
@protocol BDXNavigationBarProtocol, BDXPopupContentProtocol;

@interface BDXPopupViewContainer : UIView

@property (nonatomic) double currentTopConstraintOffset;
@property (nonatomic) double headerBarHeight;
@property (readonly, nonatomic) UIView<BDXNavigationBarProtocol> *headerBar;
@property (readonly, nonatomic) UIView<BDXPopupContentProtocol> *xView;
@property (retain, nonatomic) UIView *closeIndicator;
@property (nonatomic) BOOL shouldUseAnnieXCard;

- (id)initWithConfig:(id)a0 context:(id)a1;
- (void)setupViewWithConfig:(id)a0 context:(id)a1 containerDelegates:(id)a2;
- (id)generateXViewWithConfig:(id)a0 context:(id)a1 containerDelegates:(id)a2;
- (void)__updateSubViews;
- (void)addCloseIndicator:(id)a0;
- (double)__headerBarHeight;
- (id)initWithConfig:(id)a0 context:(id)a1 containerDelegates:(id)a2;
- (void)setUpBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)setTopConstraint:(double)a0;
- (BOOL)isLandscape;

@end
