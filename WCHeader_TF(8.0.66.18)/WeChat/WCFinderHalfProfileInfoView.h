@class WCTableViewManager, WCFinderContactPreviewData;
@protocol WCFinderHalfProfileInfoViewDelegate;

@interface WCFinderHalfProfileInfoView : UIView

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) WCFinderContactPreviewData *previewData;
@property (weak, nonatomic) id<WCFinderHalfProfileInfoViewDelegate> delegate;

+ (double)finderHalfProfileInfoViewWithPreviewData:(id)a0;

- (void)updatePreViewData:(id)a0;
- (void)layoutSubviews;
- (void)reloadData;
- (void)showFinderProfile;
- (void)addFinderEntranceCellAtSection:(id)a0 previewData:(id)a1;
- (id)getFinderCellViewWithPreviewData:(id)a0;
- (void).cxx_destruct;

@end
