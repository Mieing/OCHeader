@class AWEDitoPOIFavoritePageContext, UIImageView, AWEDitoPOIFavoriteListCoverContainer, UILabel, AWEDitoPOIFavoriteListCellComponentViewModel, YYLabel;

@interface AWEDitoPOIFavoriteListCellComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteListCellComponentViewModel *viewModel;
@property (retain, nonatomic) UILabel *listNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *collectTimeLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEDitoPOIFavoriteListCoverContainer *container;
@property (retain, nonatomic) YYLabel *cornerLabel;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;

- (void)didSelected;
- (void)updateViewModel:(id)a0;
- (void)updateUILayout;
- (void)discriminateProfileScene;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
