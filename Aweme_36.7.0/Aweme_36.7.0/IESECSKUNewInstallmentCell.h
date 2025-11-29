@class UIStackView, UIView, NSArray, NSString, IESECSKUNewInstallmentViewModel, UICollectionView, IESECSKUNewPOIView, IESECSKUTitleView;
@protocol IESECSKUNewInstallmentCellDelegate;

@interface IESECSKUNewInstallmentCell : UICollectionViewCell <IESECSKUTradeInCellDelegate>

@property (retain, nonatomic) UIStackView *container;
@property (nonatomic) unsigned long long lastSelectedIndex;
@property (retain, nonatomic) NSArray *installmentItemArray;
@property (nonatomic) BOOL canSelectInstallment;
@property (retain, nonatomic) IESECSKUTitleView *installmentTitle;
@property (retain, nonatomic) IESECSKUNewPOIView *poiView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) IESECSKUTitleView *tradeInTitle;
@property (retain, nonatomic) UIStackView *tradeInContainer;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECSKUNewInstallmentViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUNewInstallmentCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calCellHeightWithModel:(id)a0;

- (void)clickTradeInItem:(id)a0;
- (void)clickPOIInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
