@class NSString, NSDictionary, AWEPageContext, AWETemplateBarModel, AWETemplateBarContext;

@interface AWETemplateBaseViewModel : NSObject <AWETemplateViewModelProtocol>

@property (retain, nonatomic) AWETemplateBarModel *barModel;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (BOOL)shouldAvoidOtherElementWithData:(id)a0 barModel:(id)a1 context:(id)a2 scene:(unsigned long long)a3 extraInfo:(id)a4;

- (id)enterFrom;
- (void)viewController_didEndDisplayingBeforeReset;
- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisappear;
- (id)currentAweme;
- (id)commonParams;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackForTemplateViewShow;
- (id)initWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
- (void)trackForTemplateViewClick;
- (id)paramsForTemplateViewTransfer;
- (id)initWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
- (void)viewController_viewWillDisplay;
- (void)viewController_viewDidDisplay;
- (void)didInitialized;
- (void)viewTransfer;
- (BOOL)shouldTurnOnPreload;
- (BOOL)canCustomTrackForTemplateViewShow;
- (id)paramsForTemplateViewShow;
- (void)didClickTemplateView;
- (void)didClickTemplateViewTailIcon;
- (BOOL)canCustomTrackForTemplateViewClick;
- (id)paramsForTemplateViewClick;
- (void).cxx_destruct;
- (id)groupID;
- (void)updateWithData:(id)a0;
- (id)itemID;
- (void)reset;
- (id)interactionContext;
- (id)authorID;

@end
