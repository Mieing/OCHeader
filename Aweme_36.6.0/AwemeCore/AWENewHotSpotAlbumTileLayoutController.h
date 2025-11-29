@class NSArray, UIView, NSMutableArray, UILabel;

@interface AWENewHotSpotAlbumTileLayoutController : UIViewController

@property (retain, nonatomic) NSMutableArray *imageViewsArray;
@property (retain, nonatomic) NSArray *albumImages;
@property (nonatomic) long long lastTapIndex;
@property (retain, nonatomic) UIView *moreOverlay;
@property (retain, nonatomic) UILabel *moreOverlayText;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;

- (void)moreOverlayTapped;
- (void)updateImageFrame;
- (void)updateMoreOverlay;
- (void)buildRightBottomShapeLayerForView:(id)a0;
- (void)updateTapIndex:(long long)a0;
- (id)currentTransitionView;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)viewDidLoad;
- (void)updateCornerRadius;
- (void)updateWithModel:(id)a0;

@end
