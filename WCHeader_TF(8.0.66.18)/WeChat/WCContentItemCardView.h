@class UIView, UIImageView, SightIconView, MMWebImageView, WCContentItemCardViewModel, UILabel;

@interface WCContentItemCardView : WCContentItemBaseView

@property (retain, nonatomic) WCContentItemCardViewModel *viewModel;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) MMWebImageView *contentImageView;
@property (retain, nonatomic) UIImageView *picIconView;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIView *hlView;
@property (retain, nonatomic) UIImageView *bottomBkgView;

+ (double)heightForMedia:(id)a0 showDetail:(BOOL)a1;

- (void)initViewsWithWCDataItem:(id)a0;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)layoutDefault;
- (void)layoutPureText;
- (void)layoutCardStyle;
- (void)hideMenu;
- (unsigned long long)menuItemBitFlag;
- (void)onLongTouch;
- (void)onSelectMenuFavoritesAdd;
- (void).cxx_destruct;

@end
