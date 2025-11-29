@class HTSLiveGradientBackgroundView, NSArray, UICollectionView, NSMutableArray;

@interface IESLiveLandscapeClarityChooseView : UIView

@property (retain, nonatomic) NSMutableArray *qualities;
@property (nonatomic) BOOL showFPSTagStyle;
@property (retain, nonatomic) NSMutableArray *clarityButtons;
@property (nonatomic) long long currentSelectIndex;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *info;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (nonatomic) unsigned long long highResolutionFPSThresh;
@property (nonatomic) BOOL switching;
@property (copy, nonatomic) id /* block */ selectClarityBlock;
@property (copy, nonatomic) id /* block */ tapEmptyPlaceBackBlock;

- (void)setupUI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 qualities:(id)a1 deaultKey:(id)a2 showFPSTagStyle:(BOOL)a3;
- (BOOL)_shouldAddHighResolutionTag:(long long)a0;
- (long long)_getCurrentSelectedIndexWithQualities:(id)a0 deaultKey:(id)a1;
- (void)_addGradientView;
- (void)_addButtons:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addLeftTapBackView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configBtnSelectionAndDisableType:(id)a0 isCurrentSelected:(BOOL)a1 quality:(id)a2;
- (void)tapBack:(id)a0;
- (BOOL)disableSelectedThrottle;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;

@end
