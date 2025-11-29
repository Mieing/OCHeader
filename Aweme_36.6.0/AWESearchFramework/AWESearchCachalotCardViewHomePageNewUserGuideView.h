@class CAGradientLayer, NSString, UIImageView, AWESearchCachalotCardViewHomePageNewUserGuideModel, UIView, UILabel, AWESearchCachalotCardViewHomePageNewUserGuideQueryView;
@protocol AWESearchCachalotCardViewHomePageNewUserGuideViewDelegate;

@interface AWESearchCachalotCardViewHomePageNewUserGuideView : UIView <AWESearchCachalotCardViewHomePageNewUserGuideQueryViewDelegate>

@property (retain, nonatomic) CAGradientLayer *headerBackgroundLayer;
@property (retain, nonatomic) UIView *iconBackgroundView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideQueryView *firstLineView;
@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideQueryView *twoLineView;
@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideQueryView *threeLineView;
@property (nonatomic) BOOL animateFinished;
@property (retain, nonatomic) AWESearchCachalotCardViewHomePageNewUserGuideModel *model;
@property (weak, nonatomic) id<AWESearchCachalotCardViewHomePageNewUserGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTheme:(long long)a0;
- (void)resetIcon;
- (void)startAnimate:(id /* block */)a0;
- (void)didSelectQuery:(id)a0;
- (id)vcBackgroundColor;
- (void)updateHeaderLayerColors;
- (id)guideTitleColor;
- (id)guideMainIcon;
- (void)hiddenAll;
- (void)configFinalFrame:(double)a0;
- (void)animateFly:(id /* block */)a0;
- (double)sizeOfTitles;
- (id)createQueryView;
- (void)updateAllStartPosition;
- (void)animateScroll:(id /* block */)a0;
- (void).cxx_destruct;
- (void)updateData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)showAll;

@end
