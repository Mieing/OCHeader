@class IESECWinConfigStateView, NSString, IESECWinStateDiffableModel;
@protocol IESECWinStateCollectionViewCellDelegate;

@interface IESECWinStateCollectionViewCell : UICollectionViewCell <IGListBindable>

@property (retain, nonatomic) IESECWinStateDiffableModel *model;
@property (retain, nonatomic) IESECWinConfigStateView *configStateView;
@property (weak, nonatomic) id<IESECWinStateCollectionViewCellDelegate> delegate;
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
