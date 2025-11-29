@class UIColor, AWESearchWeakAnchorComponentModel, UIImageView, AWEGeneralSearchVideoCardModel, UIView, NSString, YYLabel;

@interface AWESearchVideoCardWeakAnchorComponent : AWESearchComponent <AWESearchVideoCardWeakAnchorComponentProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) YYLabel *titleYYLabel;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWESearchWeakAnchorComponentModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)onThemeChanged;
- (void)addNotification;
- (id)trackCommonParams;
- (id)anchorNormalInfo;
- (void)componentDidLoad;
- (void)trackAnchorClick;
- (void)trackAnchorShow;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewDidStartShowing;
- (void)componentViewLayoutSubviews;
- (id)broadcastProtocolList;
- (void)singleTapped:(id)a0;
- (void)setModelOnly:(id)a0;
- (id)getAnchorText;
- (BOOL)shouldUseCommonTracker;
- (id)mergeDictionariesWithDict:(id)a0 andDict:(id)a1;
- (BOOL)shouldUseCommonJump;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)componentView;
- (void)setupUI;

@end
