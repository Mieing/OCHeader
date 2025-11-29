@class UIImageView, UIView, UILabel, UIButton;
@protocol AWEMusicDetailInspirationItemViewDelegate;

@interface AWEMusicDetailInspirationItemView : UIView

@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *middleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *relateTitleLabel;
@property (retain, nonatomic) UIView *seplineView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *placeHolderCoverView;
@property (retain, nonatomic) UIView *placeHolderInfoView;
@property (weak, nonatomic) id<AWEMusicDetailInspirationItemViewDelegate> delegate;

- (void)configWithModel:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (void)setupPlaceHolderView;
- (void)updatePlaceHolderViewsStatusWith:(BOOL)a0;
- (void)updateInspirationInfoViewsStatusWith:(BOOL)a0;
- (void)setTitleLabelText:(id)a0 lineSpacing:(double)a1;
- (id)buildBDBlockTransformerWithModel:(id)a0;
- (BOOL)isNeedAddRelateText;
- (void)onTappedRightButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateUI;

@end
