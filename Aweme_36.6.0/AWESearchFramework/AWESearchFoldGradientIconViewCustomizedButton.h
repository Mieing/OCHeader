@class LOTAnimationView, UIImageView, UILabel, AWESearchFoldableInfoModel;

@interface AWESearchFoldGradientIconViewCustomizedButton : DUXButton

@property (retain, nonatomic) LOTAnimationView *loadingView;
@property (retain, nonatomic) UILabel *showAllLabel;
@property (retain, nonatomic) UIImageView *showAllIcon;
@property (retain, nonatomic) AWESearchFoldableInfoModel *infoModel;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isLoading;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)awe_themeDidChange:(long long)a0;
- (void)configUI;
- (void)updateWithInfoModel:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)startLoadingAnimate;
- (void)stopLoadingAnimate;
- (void)updateLoadingAnimation;
- (void)updateWithShowAllLabelText:(id)a0;
- (void)updateIconWithStyleId;
- (struct CGSize { double x0; double x1; })getTotalFrame;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
