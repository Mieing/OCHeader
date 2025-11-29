@class UIStackView, UIImageView, UILabel, UIView, UIButton;

@interface AWELiveShelfHeaderPoiDetailView : UIView

@property (retain, nonatomic) UIButton *poiTitle;
@property (retain, nonatomic) UIImageView *rankTagIconImageView;
@property (retain, nonatomic) UILabel *rankTagTitleLabel;
@property (retain, nonatomic) UIView *rankTagBackground;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (retain, nonatomic) UIStackView *poiDetailView;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UILabel *addressLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UIView *line2;
@property (nonatomic) BOOL isSupportJumpPoiDetail;
@property (copy, nonatomic) id /* block */ poiTitleClickedBlock;

- (void)poiTitleClicked:(id)a0;
- (void)setupWithTitle:(id)a0 Distance:(id)a1 address:(id)a2 rank:(id)a3 poiRankTag:(id)a4 isShowPoiRankTag:(BOOL)a5 isSupportJumpPoiDetail:(BOOL)a6;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
