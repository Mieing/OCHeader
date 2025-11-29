@class UIView, IESLiveGradientView, IESLiveChargeViewModel, UICollectionViewFlowLayout, NSString, UIImageView, UIButton, UICollectionView, NSNumber, UILabel;
@protocol IESLiveSubscription;

@interface IESLiveChargeViewDiamondsComponent : UIView <IESLiveChargeViewComponent>

@property (nonatomic) double width;
@property (retain, nonatomic) UIButton *chargeButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) NSNumber *lastSeletedDiamondID;
@property (retain, nonatomic) UIView *hintContainer;
@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *rightUpHintLabel;
@property (retain, nonatomic) id<IESLiveSubscription> selectedIndexToken;
@property (retain, nonatomic) id<IESLiveSubscription> couponToken;
@property (retain, nonatomic) UIView *couponContainerView;
@property (retain, nonatomic) UILabel *couponTitleLabel;
@property (retain, nonatomic) UIImageView *couponConfirmView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)confirmButtonClick;
- (void)tapActionButton;
- (void)updateHintLabelWithSelectedIndex:(long long)a0;
- (void)updateAgreementStatus;
- (void)p_reloadSelectedItemWithIndex:(long long)a0;
- (void)setupRAC;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (void)dealloc;
- (void)setupUI;
- (double)viewHeight;

@end
