@class UILabel, UIView;

@interface AWELandscapeLVPaymentTagView : UIView

@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (retain, nonatomic) UILabel *tagLabel;

- (void)addPanelTopPaymentTagIfNeeded:(id)a0;
- (void)setupTopTitle:(id)a0 subtitle:(id)a1 albumInfo:(id)a2 episodePageType:(long long)a3;
- (void).cxx_destruct;

@end
