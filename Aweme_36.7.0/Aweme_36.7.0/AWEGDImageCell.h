@class AWEGDImagePicCell, AWEGDImageVideoCell, AWEGDBussneissModel, AWEGDImageItemModel, AWEGDImageRateCell;

@interface AWEGDImageCell : UICollectionViewCell

@property (retain, nonatomic) AWEGDImagePicCell *picCell;
@property (retain, nonatomic) AWEGDImageRateCell *rateCell;
@property (retain, nonatomic) AWEGDImageVideoCell *videoCell;
@property (retain, nonatomic) AWEGDImageItemModel *cellData;
@property (retain, nonatomic) AWEGDBussneissModel *businessData;
@property (nonatomic) long long currentItemType;
@property (copy, nonatomic) id /* block */ clickAction;
@property (copy, nonatomic) id /* block */ endLoadAction;
@property (copy, nonatomic) id /* block */ trackEventBlock;

+ (id)reuseIdentifier;

- (void)onClickAction;
- (void)bindClickAction;
- (void)addPicCell;
- (void)addVideoCell;
- (void)addRateCell;
- (void)updatePicCell:(id)a0;
- (void)updateVideoCell:(id)a0;
- (void)updateRateCell:(id)a0;
- (void)updateCellData:(id)a0 businessData:(id)a1;
- (void)updateScreenStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateModel:(id)a0;

@end
