@class YYLabel, UIView;

@interface IESECLiveReplayMessageListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) YYLabel *label;
@property (retain, nonatomic) UIView *labelBackgroundView;

- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
