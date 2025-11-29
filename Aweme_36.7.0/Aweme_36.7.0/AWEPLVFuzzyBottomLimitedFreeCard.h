@class AWEPadPolymericChannelCoverFavoriteTagView, DUXBasicButton, UIImageView, AWEPadPolymericChannelCoverMaskView, AWEGradientView, AWEPLVCardTitleView, NSMutableDictionary;

@interface AWEPLVFuzzyBottomLimitedFreeCard : UICollectionViewCell

@property (retain, nonatomic) AWEPadPolymericChannelCoverMaskView *coverMaskView;
@property (retain, nonatomic) AWEGradientView *gradientView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *bottomImageView;
@property (retain, nonatomic) DUXBasicButton *bookingBtn;
@property (retain, nonatomic) AWEPLVCardTitleView *titleView;
@property (retain, nonatomic) AWEPLVCardTitleView *subtitleView;
@property (retain, nonatomic) NSMutableDictionary *displayingDescViewMap;
@property (retain, nonatomic) NSMutableDictionary *hiddenDescViewMap;
@property (retain, nonatomic) AWEPadPolymericChannelCoverFavoriteTagView *tagView;
@property (nonatomic) long long blurMaskHeight;
@property (copy, nonatomic) id /* block */ onBookingBtnClicked;

- (void)updateTitle:(id)a0 info:(id)a1 subTitle:(id)a2;
- (void)updateCoverImageWithUrlArray:(id)a0 overlayEnable:(BOOL)a1;
- (void)updateMaskSize:(struct CGSize { double x0; double x1; })a0;
- (void)onBookingBtnClicked:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
