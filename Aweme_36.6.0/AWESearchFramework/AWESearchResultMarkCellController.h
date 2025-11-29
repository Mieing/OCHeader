@class UIView, AWESSRoundInfoView, NSString, AWESearchResultMarkModel, UIImageView, CAGradientLayer, LOTAnimationView, YYLabel;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchResultMarkCellControllerDelegate;

@interface AWESearchResultMarkCellController : UIViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) YYLabel *keywordLabel;
@property (retain, nonatomic) YYLabel *titleLable;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) LOTAnimationView *whirlView;
@property (retain, nonatomic) UIView *sloganView;
@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (weak, nonatomic) id<AWESearchResultMarkCellControllerDelegate> cardDelegate;
@property (retain, nonatomic) AWESearchResultMarkModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWESSRoundInfoView *roundInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)searchRecommendIntegrationTitleFontWithPageName:(id)a0;
+ (BOOL)enableRoundInfoTagWithModel:(id)a0;
+ (id)bezierPathWithTextSize:(struct CGSize { double x0; double x1; })a0 excludeBottomRightSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)getRecommendSearchIntegrationV2ShouldHideCopilot:(id)a0;

- (void)themeDidChange:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)clickToDetail;
- (void)clickCopilot;
- (void)trackManyRoundsShow;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
