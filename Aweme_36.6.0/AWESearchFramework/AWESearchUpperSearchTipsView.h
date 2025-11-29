@class NSDictionary, NSString, UIImageView, UIVisualEffectView, UILabel, UIView, AWESearchUpperSearchAITipsView;
@protocol AWESearchUpperSearchTipsContainerProtocol;

@interface AWESearchUpperSearchTipsView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) AWESearchUpperSearchAITipsView *aiTipsView;
@property (retain, nonatomic) UIView *curAITipsView;
@property (copy, nonatomic) NSString *lastestAISearchKeyword;
@property (copy, nonatomic) NSString *lastestAISearchID;
@property (nonatomic) BOOL inAnimation;
@property (nonatomic) double tipsLength;
@property (nonatomic) BOOL hasAICard;
@property (nonatomic) BOOL lastAICardOnScreen;
@property (nonatomic) BOOL lastAICardHasGenerated;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *latestSearchId;
@property (weak, nonatomic) id<AWESearchUpperSearchTipsContainerProtocol> container;
@property (copy, nonatomic) id /* block */ didClickCloseButtonBlock;
@property (copy, nonatomic) id /* block */ didClickAITipsBlock;
@property (copy, nonatomic) id /* block */ didClickTips;
@property (copy, nonatomic) id /* block */ needAddToSuperView;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)configUI;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (void)returnButtonClicked;
- (void)tipsClick;
- (BOOL)searchHomeTopTipsFollow;
- (void)updateAITipsWithStatus:(long long)a0 completion:(id /* block */)a1;
- (void)closeTipsView;
- (id)getLastestAISearchId;
- (id)getLastestAISearchKeyword;
- (void)updateSearchWord:(id)a0 searchId:(id)a1;
- (void)updateTitleLabel:(id)a0 completion:(id /* block */)a1;
- (void)resetLastAIInfo;
- (BOOL)isTextTooLong;
- (void)updateLastestAIModelInfoWithSearchWord:(id)a0 searchId:(id)a1;
- (double)getLayerCornerRadius;
- (double)getTitleLeftMargin;
- (double)getTitleTopMargin;
- (double)getAITitleTopMargin;
- (BOOL)shouldShowAITips;
- (void)updateTipsLength;
- (double)getUpperTipsViewHeight;
- (void)trackTips:(BOOL)a0;
- (void)trackAITips:(long long)a0;
- (void)showTipsWithAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateUI;
- (long long)getStatus;

@end
