@class AWEBinding, UIImageView, ACCAIGCMultiLoraInfoCollectionViewCellModel, ACCGradientView, UIView, UILabel;
@protocol ACCAIGCMultiLoraInfoCollectionViewCellDelegate;

@interface ACCAIGCMultiLoraInfoCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *selectView;
@property (retain, nonatomic) ACCGradientView *selectViewMask;
@property (retain, nonatomic) UIView *selectBorderView;
@property (retain, nonatomic) UIView *greyMaskView;
@property (retain, nonatomic) UILabel *makeTimeLabel;
@property (retain, nonatomic) ACCAIGCMultiLoraInfoCollectionViewCellModel *model;
@property (retain, nonatomic) AWEBinding *refreshStatusBinding;
@property (weak, nonatomic) id<ACCAIGCMultiLoraInfoCollectionViewCellDelegate> delegate;

- (void)configModel:(id)a0;
- (void)onClickDelete;
- (void)onClickCell;
- (void)refreshCellStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
