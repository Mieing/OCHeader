@class NSString;
@protocol AWEFeedVideoLocalLifeAnchorV2ManagerProtocol;

@interface AWEFeedTemplateAnchorLocalLifeConfig : AWEFeedTemplateAnchorBaseConfig <AWEFeedVideoLocalLifeAnchorV2ManagerDelegate>

@property (retain, nonatomic) id<AWEFeedVideoLocalLifeAnchorV2ManagerProtocol> anchorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowAnchor:(id)a0;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (BOOL)shouldBusinessInvoke;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)anchorConfigReset;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)anchorViewReset;
- (void)didShowDoubleLineStyleAnchor;
- (id)p_getCurrentAnchorDataBuilderWithAweme:(id)a0;
- (BOOL)shouldShowPOIAnchor;
- (void)configSubDescription:(id)a0;
- (id)localLifeAnchorView;
- (void)configSecondLineText:(id)a0;
- (void)showSecondLine;
- (BOOL)secondLineDidShow;
- (void).cxx_destruct;
- (void)reset;
- (id)extraInfo;
- (void)addObservers;

@end
