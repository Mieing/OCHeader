@class UIStackView, IESGCPImageButton, IESGCPOfficialAccountTagView, UILabel, IESGCPTagsView, DetailGameIconImageView;

@interface IESGCPDetailSectionReserveGameInfoView : IESGCPDetailBaseView

@property (retain, nonatomic) DetailGameIconImageView *iconImageView;
@property (retain, nonatomic) UIStackView *desContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESGCPTagsView *tagsView;
@property (retain, nonatomic) IESGCPImageButton *descriptionLabel;
@property (retain, nonatomic) IESGCPImageButton *additionDescriptionLabel;
@property (retain, nonatomic) IESGCPOfficialAccountTagView *officialTagView;

- (void)bindViewModel:(id)a0;
- (void)layoutWithGameInfoThemeConfig:(id)a0;
- (void)descriptionLabelDidClick:(id)a0;
- (void)observeAndUpdateGameInfoThemeConfig;
- (void)descriptionAdditionLabelDidClick:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setupViews;

@end
