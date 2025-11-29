@class UIButton, UICollectionView, GCLabelDynamicLayout, UIView, UILabel, GCCollectionViewManager;
@protocol GCPannelProtocol;

@interface GCPannelView : UIView

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UICollectionView *bottomCollectionView;
@property (retain, nonatomic) GCLabelDynamicLayout *itemLabelLayout;
@property (retain, nonatomic) GCCollectionViewManager *clvManager;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *leftDownBtn;
@property (weak, nonatomic) id<GCPannelProtocol> pannelDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithPannelItems:(id)a0;
- (void).cxx_destruct;

@end
