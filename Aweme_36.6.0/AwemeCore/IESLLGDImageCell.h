@class IESLLGDBussneissModel, IESLLGDImageRateCell, IESLLGDImagePicCell, IESLLGDImageVideoCell, IESLLGDImageItemModel;

@interface IESLLGDImageCell : UICollectionViewCell

@property (retain, nonatomic) IESLLGDImagePicCell *picCell;
@property (retain, nonatomic) IESLLGDImageRateCell *rateCell;
@property (retain, nonatomic) IESLLGDImageVideoCell *videoCell;
@property (retain, nonatomic) IESLLGDImageItemModel *cellData;
@property (retain, nonatomic) IESLLGDBussneissModel *businessData;
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
