@class MiniTaskLongPressGesture, NSString, UIImageView, MiniTaskCollectionCellViewModel;
@protocol MiniTaskCollectionCellDelegate;

@interface MiniTaskCollectionBaseCell : UICollectionViewCell <UIGestureRecognizerDelegate, MiniTaskCollectionCellViewModelDelegate>

@property (retain, nonatomic) MiniTaskLongPressGesture *longPressGes;
@property (retain, nonatomic) MiniTaskCollectionCellViewModel *viewModel;
@property (weak, nonatomic) id<MiniTaskCollectionCellDelegate> delegate;
@property (retain, nonatomic) UIImageView *snapShotView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)performContentAlphaAnimationIfNeed;
- (void)setContentAlpha:(double)a0;
- (void)asyncLoadSnapshot:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuPopoverFrame;
- (id)menuItems;
- (id)defaultIconNameForBizName:(id)a0;
- (id)extraIconNameForBizName:(id)a0;
- (void)onLongPress:(id)a0;
- (void)onMenuSelectFavorite:(id)a0;
- (void)onMenuSelectDelete:(id)a0;
- (struct CGSize { double x0; double x1; })snapshotImagePreferredSize;
- (id)extInfoForSnapshotPrinter;
- (void).cxx_destruct;

@end
