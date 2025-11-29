@class UILabel;

@interface IESLiveKTVSearchHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *contentLabel;

- (void)renderWithContent:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 scaleRatio:(long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
