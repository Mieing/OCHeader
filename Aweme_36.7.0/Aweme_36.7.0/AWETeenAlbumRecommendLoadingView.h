@class UILabel, UIView;

@interface AWETeenAlbumRecommendLoadingView : UIView

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UIView *cellContainer;
@property (nonatomic) long long rowCount;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rowCount:(long long)a1 title:(id)a2;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
