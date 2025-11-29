@class AWEAwemeModel, UIView, NSString, UIImageView, AWEPOIContentLabel, AWEGradientView, CAGradientLayer, AWEPOIRateComposedContainerView, UILabel;

@interface AWEPOIDetailAwemeCollectionViewCell : UICollectionViewCell <AWEPOIDetailAwemeWaterfallAwemeCellProtocol>

@property (retain, nonatomic) UIView *liveTypeTagView;
@property (retain, nonatomic) UILabel *liveTypeTagLabel;
@property (retain, nonatomic) CAGradientLayer *liveTypeBgLayer;
@property (retain, nonatomic) UIView *coverBottomMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *genreIcon;
@property (retain, nonatomic) AWEPOIContentLabel *itemTagLabel;
@property (retain, nonatomic) AWEGradientView *tagBackgroundView;
@property (retain, nonatomic) UIImageView *userImageView;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPOIRateComposedContainerView *rateView;
@property (retain, nonatomic) UIView *rateBackgroundView;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightForModel:(id)a0 withWidth:(double)a1;
+ (double)coverImageRatioForAweme:(id)a0;
+ (unsigned long long)p_rateContainerScence;

- (void)p_layoutUI;
- (void)p_updateCoverImageView;
- (void)p_updateGenreIcon;
- (void)p_updateUser;
- (void)p_updateLiveTag;
- (void)updateCellWithModel:(id)a0 constData:(id)a1 index:(long long)a2;
- (void)p_updateItemTag;
- (void)p_updateLike;
- (void)updateA11yWithLabel:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)store;

@end
