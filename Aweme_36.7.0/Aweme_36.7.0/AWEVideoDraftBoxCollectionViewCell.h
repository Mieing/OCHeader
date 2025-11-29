@class UILongPressGestureRecognizer, NSIndexPath, UIImageView, AWEVideoDraftBoxCollectionViewCellSelectContentView, AWEVideoDraftBoxCollectionCellModel, AWEVideoDraftBoxCollectionViewCellNormalContentView, AWEVideoDraftBoxCollectionViewCellCleanTypeContentView;
@protocol AWEVideoDraftBoxCollectionViewCellDelegate;

@interface AWEVideoDraftBoxCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEVideoDraftBoxCollectionViewCellNormalContentView *normalContentView;
@property (retain, nonatomic) AWEVideoDraftBoxCollectionViewCellSelectContentView *selectContentView;
@property (retain, nonatomic) AWEVideoDraftBoxCollectionViewCellCleanTypeContentView *cleanTypeContentView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPress;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEVideoDraftBoxCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEVideoDraftBoxCollectionCellModel *cellModel;
@property (nonatomic) BOOL isNotFirstShowCell;

+ (id)identifier;

- (void)updateMaskView;
- (void)p_updateAccessibilityLabel;
- (void)updateWithEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)againAction;
- (void)againTouchDown;
- (void)againTouchUp;
- (void)p_addLongPressGestureRecognizer:(id)a0;
- (void)p_resetTimeString;
- (void)p_showContentIfNeeded;
- (BOOL)isSpecifiedDraftType:(long long)a0;
- (void)p_updateAIDraftElements:(id)a0;
- (BOOL)p_shouldHideMediumRewardTagLabel;
- (void)trackDraftShow;
- (void)updateElements;
- (void)transToCleanStatus;
- (void)updateElementsIfNeededWithIndexPath:(id)a0;
- (void)updateWithSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)selectAction;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
