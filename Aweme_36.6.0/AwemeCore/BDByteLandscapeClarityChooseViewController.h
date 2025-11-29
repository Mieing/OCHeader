@class UIView, NSString, NSArray, BDSCClarityLimitConfig, BDByteScreenCastAppUIConfigInfo, UIButton, BDSCGradientColorView, UICollectionView, UILabel, UIVisualEffectView;
@protocol BDByteScreenCastClarityChooseViewDelegate;

@interface BDByteLandscapeClarityChooseViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, BDByteScreenCastClarityChooseView>

@property (copy, nonatomic) NSArray *clarityList;
@property (copy, nonatomic) NSString *curClarity;
@property (retain, nonatomic) UICollectionView *clarityCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) BDSCGradientColorView *gradientView;
@property (nonatomic) BOOL isTransitioning;
@property (retain, nonatomic) BDSCClarityLimitConfig *clarityLimitConfig;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<BDByteScreenCastClarityChooseViewDelegate> delegate;
@property (copy, nonatomic) NSArray *limitedClarity;
@property (retain, nonatomic) BDByteScreenCastAppUIConfigInfo *appUIInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissSelfWithCompletion:(id /* block */)a0;
- (void)buildSubviews;
- (void)updateCurrentClarity:(id)a0;
- (void)updateClarityWithList:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateConstraints;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)refreshUI;
- (void)showInViewController:(id)a0;

@end
