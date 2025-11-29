@class UIView, UIImage, UIImageView, AWEMusicDetailHeaderLayoutManager, AWEDetailNewHeaderInfoModel, CAGradientLayer, AWEMusicDetailHeaderTitleLabel, UILabel, IESServiceProvider;
@protocol AWEDetailViewModelProtocol;

@interface AWEDetailNewHeaderView : UICollectionViewCell

@property (weak, nonatomic) id<AWEDetailViewModelProtocol> stateContext;
@property (retain, nonatomic) AWEDetailNewHeaderInfoModel *headerInfoModel;
@property (retain, nonatomic) IESServiceProvider *provider;
@property (retain, nonatomic) AWEMusicDetailHeaderLayoutManager *layoutManager;
@property (retain, nonatomic) UIView *coverContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImage *downgradingCoverImage;
@property (retain, nonatomic) CAGradientLayer *coverMaskLayer;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UIImageView *authorNameArrow;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIView *headerContainer;
@property (retain, nonatomic) AWEMusicDetailHeaderTitleLabel *titleLabel;

- (double)titleLabelHeight;
- (void)p_addSubviews;
- (void)configWithModel:(id)a0 serviceProvider:(id)a1;
- (void)clickedAuthorView:(id)a0;
- (void)p_routeWithModel:(id)a0;
- (void)updateDuetHeaderView;
- (double)rightLabelsHeight;
- (double)headerContainerHeight;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrowImageView;

@end
