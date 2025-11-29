@class UIView, IESLiveWalletChargeViewModel, IESLiveGradientView, UICollectionViewFlowLayout, IESLiveWalletMyCoinItem, UIImageView, UIButton, NSString, UICollectionView, IESLiveBaseChargeAgreementView, UILabel;
@protocol IESLiveSubscription;

@interface IESLiveWalletCoinChargeView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IESWalletChargeViewModelDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveBaseChargeAgreementView *agreementView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) UIImageView *remindIcon;
@property (retain, nonatomic) UIButton *chargeButton;
@property (retain, nonatomic) IESLiveWalletChargeViewModel *chargeViewModel;
@property (retain, nonatomic) UIView *hintContainer;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *rightUpHintLabel;
@property (retain, nonatomic) id<IESLiveSubscription> selectedIndexToken;
@property (retain, nonatomic) IESLiveWalletMyCoinItem *item;
@property (copy, nonatomic) id /* block */ manualAgreementChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateManualAgreementStatus:(BOOL)a0;
- (void)updateHintLabelWithSelectedIndex:(long long)a0;
- (void)setupRAC;
- (void)shouldForceUpdateData;
- (void)updateCommonTrackInfo:(id)a0;
- (void)updateChargeButtonText;
- (void)chargeImmediately;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)dealloc;
- (void)setupUI;

@end
