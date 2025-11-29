@class NSString, UICollectionView, UIView, AWEDetailNaviBar;
@protocol AWEDetailUnifyNaviBarHost;

@interface AWEDetailUnifyFullNaviBarAnimator : NSObject <AWEDetailBusinessHandlerProtocol>

@property (weak, nonatomic) id<AWEDetailUnifyNaviBarHost> host;
@property (nonatomic) double hostNaviBarBottomOffsetY;
@property (weak, nonatomic) UICollectionView *hostCollectionView;
@property (weak, nonatomic) UIView *hostNaviBarBackgoundView;
@property (weak, nonatomic) AWEDetailNaviBar *hostNaviBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostViewDidLoad;
- (void)p_updateNaviBar;
- (double)itemAlphaForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;

@end
