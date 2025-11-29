@class AWESearchScanHistoryModel, NSString, UIImageView, UIButton;
@protocol AWESearchScanHistoryCellDelegate;

@interface AWESearchScanHistoryImageCell : UICollectionViewCell

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIImageView *historyImageView;
@property (nonatomic) BOOL showDeleteButton;
@property (retain, nonatomic) NSString *scanID;
@property (retain, nonatomic) AWESearchScanHistoryModel *model;
@property (weak, nonatomic) id<AWESearchScanHistoryCellDelegate> delegate;

- (void)configUI;
- (void)updateCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteButtonTapped;

@end
