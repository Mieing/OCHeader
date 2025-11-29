@class WCTableViewManager, WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig;
@protocol WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate;

@interface WCFinderLivePersonalCenterPaymentInfoCollectionCell : UICollectionViewCell

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCFinderLivePersonalCenterPaymentInfoCollectionCellConfig *cellConfig;
@property (weak, nonatomic) id<WCFinderLivePersonalCenterPaymentInfoCollectionCellActionDelegate> actionDelegate;

+ (double)cellHeightWithConfig:(id)a0;
+ (id)cellID;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setup;
- (void)updateWithConfig:(id)a0;
- (void)reloadTableViewWithConfig:(id)a0;
- (void)reportCellExposeWithCurrentConfig:(id)a0 prevConfig:(id)a1;
- (id)getCommentSceneStr;
- (void)onShoppingRecordClick;
- (void)onPurchasedRecordClick;
- (void)onLotteryRecordClick;
- (void).cxx_destruct;

@end
