@class NSString, UIImageView, AWEAwemeModel, UIView, YYLabel;

@interface AWEGeneralWaterfallWeakAnchorView : UIView

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) UIView *backgroundContainerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleYYLabel;

+ (BOOL)shouldShowWeakAnchorViewWithModel:(id)a0;
+ (double)weakAnchorViewHeight;
+ (BOOL)hitWeakAnchorSettingsWithModel:(id)a0;
+ (id)getAnchorTextWithModel:(id)a0;

- (void)awe_themeDidChange:(long long)a0;
- (id)trackDict;
- (void)didStartShowing;
- (void)cardSingleTapped:(id)a0;
- (void)updateWithModel:(id)a0 referString:(id)a1 searchKeyword:(id)a2;
- (id)initWithModel:(id)a0 referString:(id)a1 searchKeyword:(id)a2;
- (void)trackWeakAnchorShow;
- (void)trackWeakAnchorClick;
- (BOOL)shouldUseCommonTracker;
- (id)mergeDictionariesWithDict:(id)a0 andDict:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
