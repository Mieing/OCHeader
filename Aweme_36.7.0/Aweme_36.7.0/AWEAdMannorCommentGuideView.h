@class NSString, BDMannorManager, AWEAwemeModel, UIView;
@protocol AWEMannorCommentGuideDelegate;

@interface AWEAdMannorCommentGuideView : UIView <AWEAdMannorCommentGuideView>

@property (retain, nonatomic) BDMannorManager *mannorManager;
@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEMannorCommentGuideDelegate> delegate;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldInsertAdMannorComment:(id)a0;
+ (BOOL)adMannorCommentEnable:(id)a0;

- (id)adExtraData;
- (void)onUIThemeChange;
- (void)setupCardWithView:(id)a0 model:(id)a1;
- (void)p_setupMannorCard;
- (id)p_mannorContext;
- (id)p_mannorJSBInjectHandlerMethodMap;
- (id)p_mannorComponentElement;
- (BOOL)isLightThemeStyle;
- (void)p_closeButtonClicked;
- (void)p_clickCardWith:(id)a0 params:(id)a1;
- (void)p_panelViewClicked;
- (void)p_openProfileOrLandingPageWithRefer:(id)a0;
- (void)p_descClicked;
- (void)p_learnMoreBtnClicked;
- (void).cxx_destruct;
- (void)reset;

@end
