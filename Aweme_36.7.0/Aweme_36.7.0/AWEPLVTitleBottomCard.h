@class NSString, iconTextView, UIImageView, AWEPLVCardCornerIconView, AWEGradientView, UILabel, AWEPadPolymericChannelCoverFavoriteTagView;

@interface AWEPLVTitleBottomCard : UICollectionViewCell <DUXGridBreakPointResponder, AWEPadCollectionReusableViewLayoutProtocol>

@property (retain, nonatomic) UIImageView *avatarImage;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (retain, nonatomic) UILabel *cardTypeTagLabel;
@property (retain, nonatomic) UILabel *bottomRightLabel;
@property (retain, nonatomic) iconTextView *bottomLeftTag;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPLVCardCornerIconView *cornerIcon;
@property (nonatomic) double cardHeightPercent;
@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEPadPolymericChannelCoverFavoriteTagView *favoritTagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)duxGrid_superViewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (void)setSubTitleFontSize:(long long)a0;
- (void)updateCoverImageWithUrlArray:(id)a0;
- (void)updateTitle:(id)a0 subTitle:(id)a1;
- (void)updateCardCoverHeightPercent:(double)a0;
- (void)updateBottomLeftTagWithImage:(id)a0 text:(id)a1;
- (void)updateAvatarImageWithUrlArray:(id)a0;
- (void)updateBottomRightText:(id)a0;
- (void)updateTopLeftLabel:(id)a0;
- (void)configCardTitleStyle:(long long)a0;
- (void)updateCornerIcon:(unsigned long long)a0;
- (void)updateCardType:(unsigned long long)a0;
- (void)updateViewWithBreakPoint:(struct { long long x0; long long x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTitleFontSize:(long long)a0;

@end
