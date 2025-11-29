@class UIView, AWESearchFoldGradientIconViewCustomizedButton, NSString, CALayer, UIImageView, UIButton, CAGradientLayer, LOTAnimationView, AWESearchFoldableInfoModel, UILabel;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchFoldGradientIconView : UIView <AWESearchFoldGradientProtocol>

@property (retain, nonatomic) CAGradientLayer *gradientColorLayer;
@property (retain, nonatomic) CALayer *shieldLayer;
@property (retain, nonatomic) UIButton *showAllButton;
@property (retain, nonatomic) UILabel *showAllLabel;
@property (retain, nonatomic) UIImageView *showAllIcon;
@property (retain, nonatomic) UIView *tapArea;
@property (retain, nonatomic) AWESearchFoldableInfoModel *infoModel;
@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (retain, nonatomic) AWESearchFoldGradientIconViewCustomizedButton *customizedButton;
@property (nonatomic) BOOL isPlaying;
@property (copy, nonatomic) id /* block */ didClickShowAllButtonBlock;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (nonatomic) BOOL isFullPageGeneralSearch;
@property (nonatomic) BOOL isAboveDoubleColumn;
@property (nonatomic) double singleColumnBottomMargin;
@property (nonatomic) double doubleColumnBottomMargin;
@property (nonatomic) double totalHeight;
@property (nonatomic) BOOL isLoading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (long long)syncGetSearchTop1FoldOptStyle;
+ (BOOL)isFullPageGeneralSearch;

- (void)awe_themeDidChange:(long long)a0;
- (void)configUI;
- (void)updateWithInfoModel:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)hideCorner;
- (double)getTotalViewHeight;
- (void)updateLoadingAnimation;
- (void)updateWithShowAllLabelText:(id)a0;
- (void)updateGradientColorLayer;
- (void)updateButtonLayer;
- (void)updateIconWithStyleId;
- (id)gradientColors:(long long)a0;
- (id)gradientColors:(long long)a0 withConfig:(id)a1;
- (void)showAllButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
