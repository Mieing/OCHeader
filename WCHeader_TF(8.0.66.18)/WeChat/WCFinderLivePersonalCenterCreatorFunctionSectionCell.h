@class WCTableViewManager, FinderLiveCreatorFunctions;
@protocol WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate;

@interface WCFinderLivePersonalCenterCreatorFunctionSectionCell : UICollectionViewCell

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) FinderLiveCreatorFunctions *functions;
@property (weak, nonatomic) id<WCFinderLivePersonalCenterCreatorFunctionSectionCellDelegate> actionDelegate;

+ (double)cellHeightWithFunctions:(id)a0;
+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;
- (void)updateWithFunctions:(id)a0;
- (void)reloadTableView;
- (id)createHistoryLiveCellWithRedDot:(id)a0;
- (id)getRightViewByRightRedDot:(id)a0;
- (void)didClickCell:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;

@end
