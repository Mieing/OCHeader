@class UIImageView, UILabel, AWEMusicStreamingMiniCommonInfoPopupViewModel;

@interface AWEMusicStreamingMiniCommonInfoPopupView : AWEMusicStreamingBasePopupView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEMusicStreamingMiniCommonInfoPopupViewModel *viewModel;

- (void)showInView:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupSubviews;

@end
