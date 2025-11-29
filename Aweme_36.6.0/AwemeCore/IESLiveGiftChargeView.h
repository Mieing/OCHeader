@class IESLiveGiftChargeItem, UIImageView, IESLiveDouyinChargeBannerView, UILabel, NSString, UIButton;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftChargeView : UIView <IESLiveWalletAction, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (nonatomic) unsigned long long giftCurreny;
@property (retain, nonatomic) UIButton *chargeContentView;
@property (retain, nonatomic) UIImageView *priceLeftIconImageView;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UIImageView *priceRightIconImageView;
@property (retain, nonatomic) IESLiveDouyinChargeBannerView *chargeBannerView;
@property (nonatomic) BOOL didSetup;
@property (retain, nonatomic) IESLiveGiftChargeItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)diamondHasUpdated;
- (void)didChargeContentViewClicked:(id)a0;
- (void)loadChargeSubViews;
- (void)trackChargeEntranceShow;
- (void).cxx_destruct;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;

@end
