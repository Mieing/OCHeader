@class UIView, NSString, AWESearchCorrectModel, AWESearchGSInfoModel, AWEEcommerceGuideSearchV2Model, AWESearchGuideSearchContainerView, CAGradientLayer, AWESearchCorrectView, NSDictionary;

@interface AWESearchDoubleColumnReusableHeaderView : UICollectionReusableView <AWESearchDoubleColumnReusableHeaderViewProtocol>

@property (retain, nonatomic) AWESearchGuideSearchContainerView *guideSearchContainerView;
@property (retain, nonatomic) AWESearchCorrectView *suggestView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2Model *guideSearchV2Model;
@property (retain, nonatomic) AWESearchGSInfoModel *gsInfo;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) NSDictionary *extraTrackParams;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) unsigned long long theme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getGuideSearchViewContainerHeightMarginInEcommerce;
+ (double)getGuideSearchViewContainerHeightMargin;
+ (double)getGuideSearchViewContainerTopMargin:(BOOL)a0;
+ (double)getGuideSearchViewContainerBottomMargin:(BOOL)a0;

- (void)setTapBlock:(id /* block */)a0;
- (void)trackCardShow;
- (void)configUI;
- (void)resetResults;
- (void)updateWithGuideSearchV2Model:(id)a0 correctModel:(id)a1 isNewGuideSearchWordList:(BOOL)a2 isFromEcommerce:(BOOL)a3 gsInfo:(id)a4;
- (void)setGuideSearchViewDelegate:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
