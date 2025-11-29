@class NSString, UIImageView, UICollectionView, IESLivePSFloatSheetPanelViewModel, UIView;

@interface IESLivePSFloatSheetPanelView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) IESLivePSFloatSheetPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapView;
- (void)refreshView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)setupUI;
- (void)createShadowView;
- (double)containerWidth;

@end
