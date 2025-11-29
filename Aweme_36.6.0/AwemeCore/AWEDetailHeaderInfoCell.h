@class AWEDetailPropHeaderKeyWordsLabel, IESServiceProvider, UILabel, AWEDetailHeaderInfoModel, UIButton, UIView, AWEMusicDetailHeaderLayoutManager, AWEDetailHeaderOwnerView, AWEDetailUnifyHeaderActivityView, AWEMusicDetailHeaderTitleLabel, AWECollectionButton, NSArray, AWEBinding, AWEDetailShimmerView, UIImageView;
@protocol AWEDetailViewModelProtocol, BDXViewContainerProtocol;

@interface AWEDetailHeaderInfoCell : UICollectionViewCell

@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (retain, nonatomic) AWEDetailHeaderInfoModel *headerInfoModel;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutManager *layourManager;
@property (retain, nonatomic) NSArray *infoArray;
@property (retain, nonatomic) AWEBinding *shareButtonHiddenBinding;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) AWEMusicDetailHeaderTitleLabel *aiTitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEDetailHeaderOwnerView *authorView;
@property (retain, nonatomic) AWEDetailHeaderOwnerView *sponsorView;
@property (retain, nonatomic) AWEDetailHeaderOwnerView *welfareAuthorView;
@property (retain, nonatomic) UILabel *detailContentLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) AWECollectionButton *collectButton;
@property (retain, nonatomic) UIButton *leftCustomButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UILabel *verificationLabel;
@property (retain, nonatomic) UILabel *multiLoraPersonRangeLabel;
@property (retain, nonatomic) AWEDetailPropHeaderKeyWordsLabel *keywordsLabel;
@property (retain, nonatomic) AWEDetailUnifyHeaderActivityView *unifyActivityView;
@property (retain, nonatomic) UIView *separateLineView;
@property (retain, nonatomic) UILabel *templateInfoLabel;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *jumpToUlikeView;
@property (retain, nonatomic) UIView *collectSkeletonView;
@property (retain, nonatomic) AWEDetailShimmerView *shimmerView;

- (void)themeDidChange:(id)a0;
- (void)p_updateUI;
- (void)p_addSubviews;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clickedHeaderCollectButton:(id)a0;
- (void)clickedHeaderLeftCustomButton:(id)a0;
- (void)clickedAuthorView:(id)a0;
- (void)clickedSponsorView:(id)a0;
- (void)clickedWelfareAuthorView:(id)a0;
- (void)clickedShareButton:(id)a0;
- (void)clickedIconImageView:(id)a0;
- (void)p_bindViewModel;
- (void)p_createKeyWordsText;
- (void)p_updateCollectButton:(id)a0;
- (void)p_setKeyWordsText:(id)a0 withType:(unsigned long long)a1;
- (void)truncationTokenClicked;
- (void)jumpToLoraDetailPage;
- (void)p_routeWithModel:(id)a0;
- (void)clickActivityEntranceButton:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
