@class UIView, UIFont, IESECShopMomentsVideoModel, NSString, UIImageView, IESECPriceLabel, IESECGoodsPriceLabel, YYLabel, UILabel;
@protocol IESECShopMomentsVideoCardDelegate, IESECAwemeVideoViewProtocol;

@interface IESECShopMomentsVideoCard : UICollectionViewCell <IESECShopMomentsVideoCardProtocol>

@property (retain, nonatomic) IESECShopMomentsVideoModel *cellModel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) UIView *playerContainerView;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) UIImageView *playMuteImageView;
@property (retain, nonatomic) UIView *productContainerView;
@property (retain, nonatomic) UIImageView *productCoverImageView;
@property (retain, nonatomic) IESECGoodsPriceLabel *productPriceLabel;
@property (retain, nonatomic) UILabel *productTitleLabel;
@property (retain, nonatomic) UILabel *productTipLabel;
@property (retain, nonatomic) IESECPriceLabel *priceLabel;
@property (weak, nonatomic) id<IESECShopMomentsVideoCardDelegate> delegate;
@property (copy, nonatomic) id /* block */ titleAction;
@property (retain, nonatomic) UIFont *titleLabelFont;
@property (nonatomic) BOOL titleLabelExpanded;
@property (nonatomic) unsigned long long titleLabelCollapsedLines;
@property (nonatomic) unsigned long long titleLabelExpandedLines;
@property (nonatomic) BOOL videoLandscapeMode;
@property (nonatomic) double videoPlayerHeight;
@property (weak, nonatomic) UIView<IESECAwemeVideoViewProtocol> *playerView;
@property (nonatomic) BOOL videoMute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleAttributedString:(id)a0 withFont:(id)a1;

- (void)didTapVideoView;
- (void)updateSubviewsStyle;
- (void)remakeConstraints;
- (id)p_titleAttributedString:(id)a0 withFont:(id)a1 textColor:(id)a2;
- (id)p_titleLabelTruncationWithFont:(id)a0 textColor:(id)a1 expand:(BOOL)a2;
- (void)didChangeVideoMute:(BOOL)a0;
- (void)didTapTitleCollapseLabel;
- (void)didTapTitleExpandLabel;
- (id)p_titleLabelTruncationWithFont:(id)a0 textColor:(id)a1;
- (void)didTapTitleLabel;
- (void)didTapPlayMuteView;
- (void)didTapProdudctView;
- (void)playerDidRecycle;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
