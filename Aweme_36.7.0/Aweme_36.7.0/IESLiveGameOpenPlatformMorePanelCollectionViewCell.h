@class UIImageView, UILabel, UIView, MorePanelDataModel;

@interface IESLiveGameOpenPlatformMorePanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *cellGifImage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MorePanelDataModel *model;

- (void)makeConstraints;
- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
