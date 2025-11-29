@class NSArray, AWEAwemeModel, UIView, NSMutableArray, UILabel;

@interface AWESearchAlbumTileLayoutController : UIViewController

@property (retain, nonatomic) NSMutableArray *imageViewsArray;
@property (retain, nonatomic) NSArray *albumImages;
@property (nonatomic) long long lastTapIndex;
@property (retain, nonatomic) UIView *moreOverlay;
@property (retain, nonatomic) UILabel *moreOverlayText;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL shouldUpdateFocus;
@property (nonatomic) BOOL isTapped;
@property (copy, nonatomic) id /* block */ albumTappedWithIndex;
@property (nonatomic) BOOL isInnerRerank;

+ (long long)syncGetSearchAlbumStyle;
+ (long long)getMaxCountWithLayoutType:(unsigned long long)a0 images:(id)a1;
+ (struct CGSize { double x0; double x1; })getSingleImageSize:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })getContainerSizeFromImages:(id)a0 containerWidth:(double)a1 layoutType:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })getContainerSizeForTileStyle:(id)a0 containerWidth:(double)a1 layoutType:(unsigned long long)a2;

- (void)moreOverlayTapped;
- (void)updateImageFrame;
- (void)updateMoreOverlay;
- (void)buildRightBottomShapeLayerForView:(id)a0;
- (void)updateTapIndex:(long long)a0;
- (id)currentTransitionView;
- (BOOL)shouldUpdateFocusView;
- (BOOL)isNewTileStyle;
- (void)updateCornerRadiusUnderNewStyle;
- (void)updateLayoutType:(unsigned long long)a0;
- (void)resetTapInfo;
- (void)updateImageUI;
- (void).cxx_destruct;
- (id)init;
- (id)transitionContext;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateCornerRadius;
- (id)initWithLayoutType:(unsigned long long)a0;
- (void)updateWithModel:(id)a0;

@end
