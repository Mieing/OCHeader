@class NSString, UIImageView, AWEPageContext, UIView, AWEAwemeModel, UILabel;
@protocol AWEPlayInteractionContextProtocol, AWEDouyinSelectBrandTrackerProtocol;

@interface AWERelatedVideoJXDiversionView : UIView <AWERelatedVideoJXDiversionViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *jxIcon;
@property (retain, nonatomic) UILabel *preLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIImageView *arrowRight;
@property (nonatomic) long long style;
@property (nonatomic) long long realScale;
@property (copy, nonatomic) NSString *zlink;
@property (retain, nonatomic) id<AWEDouyinSelectBrandTrackerProtocol> douyinSelectBrandTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)relatedVideoJXDiversionViewDismiss;
- (void)trackRelatedVideoJXDiversionViewEvent:(BOOL)a0;
- (void)setupGesture;
- (void)updateWithModel:(id)a0 withContext:(id)a1;
- (void)initDouyinSelectBrandTrackerManager;
- (void)brandViewControllerDidAppear;
- (void)brandViewControllerDidDisAppear;
- (void)brandViewDismiss;
- (void)brandViewReshow;
- (void)setupViewStyle;
- (void)getRealFontScale;
- (void)jumpToJXApp;
- (void)jumpToDetailPageOnLabelTap;
- (BOOL)isWeeklyTag;
- (id)getWeeklyTerm;
- (BOOL)isDailyTag;
- (double)getIconSize;
- (double)getDividerDotSize;
- (double)getPreLabelFontSize;
- (id)getPreLabelText;
- (double)getSuffixLabelFontSize;
- (double)getArrowIconSize;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;
- (void)handleTapGesture;
- (double)getHeight;

@end
