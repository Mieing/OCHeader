@class IESECShopStateDiffableModel, NSString, UIImageView, IESECShopStateRecommendView, UILabel, IESECShopConfigStateView, UIButton;
@protocol IESECShopStateCollectionViewCellDelegate;

@interface IESECShopStateCollectionViewCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) IESECShopStateDiffableModel *model;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) UILabel *shopEntryLabel;
@property (retain, nonatomic) UIButton *shopEntryButton;
@property (retain, nonatomic) UILabel *statementLabel;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) IESECShopStateRecommendView *recommendEmptyView;
@property (retain, nonatomic) IESECShopConfigStateView *configStateView;
@property (weak, nonatomic) id<IESECShopStateCollectionViewCellDelegate> delegate;
@property (nonatomic, getter=isEntranceMode) BOOL entranceMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)a0;
- (void)didShowShopEntry;
- (void)didTapShopEntry;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
