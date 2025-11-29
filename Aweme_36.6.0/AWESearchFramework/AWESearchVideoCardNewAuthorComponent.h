@class AWEAwemeModel, NSString, AWESearchAuthorContentView, AWELiveVSEpisode, AWESearchCardAuthorCombinationComponentModel, NSDictionary, AWESearchEventDispather, AWEGeneralSearchVideoCardModel;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol, AWESearchCardAuthorCombinationComponentProtocol;

@interface AWESearchVideoCardNewAuthorComponent : AWESearchComponent <AWESearchVideoCardNewAuthorComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) AWESearchAuthorContentView *contentView;
@property (retain, nonatomic) AWESearchCardAuthorCombinationComponentModel *authorCombinationModel;
@property (retain, nonatomic) id<AWESearchCardAuthorCombinationComponentProtocol> authorCombinationComponent;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (retain, nonatomic) AWELiveVSEpisode *episode;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (id)configComponentModelWith:(id)a0 width:(double)a1;

- (void)trackShow;
- (void)trackLiveShow;
- (void)authorNameTapped:(id)a0;
- (void)avatarImageTapped:(id)a0;
- (void)didBecomeVisibleToUsers;
- (void)componentDidLoad;
- (id)playerProvider;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (id)tokenTypeForModel:(id)a0;
- (BOOL)tryEnterVSDetail;
- (void)trackAuthorNameTappedWithBtnType:(id)a0;
- (void)enterXiguaPersonalPage:(id)a0;
- (void)preloadTimor;
- (void)p_createComponent;
- (id)tapNotTriggerArea;
- (void)setModelOnly:(id)a0;
- (id)p_context;
- (id)descProvider;
- (BOOL)isNowLiving:(id)a0;
- (void)trackVSLiveShow;
- (void)trackVSPremiereShow;
- (id)p_getVideoCardBtmDcmInfoDict:(long long)a0;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (id)router;

@end
