@class AWERVAnchorItemView, AWELVideoEntranceInfoModel, NSString;

@interface AWERVLVAnchorViewCell : UICollectionViewCell

@property (retain, nonatomic) AWERVAnchorItemView *itemView;
@property (retain, nonatomic) AWELVideoEntranceInfoModel *model;
@property (copy, nonatomic) NSString *contentStr;

- (void)updateCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellSize;
- (void)setupUI;

@end
