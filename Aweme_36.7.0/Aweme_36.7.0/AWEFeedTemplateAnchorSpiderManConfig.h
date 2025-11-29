@class NSString;

@interface AWEFeedTemplateAnchorSpiderManConfig : AWEFeedTemplateAnchorBaseConfig

@property (nonatomic) BOOL twoLineHasAnimated;
@property (nonatomic) BOOL isFriendInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *doubleInfo;

- (void)anchorViewWillShowOnSuperview;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorShow;
- (id)trackerParamsForTemplateAnchorClick;
- (void)trackerForTemplateAnchorShow;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)trackerForTemplateAnchorClick;
- (void)anchorConfigReset;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)didShowDoubleLineStyleAnchor;
- (void)trackEventWithEventName:(id)a0 withParams:(id)a1;
- (void)trackAnchorUserEventWithEventName:(id)a0;
- (void)updateForSpiderDoubleLine:(id)a0;
- (BOOL)canPreloadIronMan:(id *)a0;
- (BOOL)forbidIronManPreloadInLowerDevice;
- (BOOL)enableIronManPreloadWithNunki;
- (id)anchorTrackParamsWithEventName:(id)a0;
- (id)detailTextTrackerParams;
- (void)trackAdAnchorEventWithLabel:(id)a0 refer:(id)a1 extraData:(id)a2;
- (id)templateAnchorTrackerParams;
- (id)clickTrackerParams;
- (id)microAppTrackParams;
- (id)microAppScene;
- (id)microAppBDPLogParams;
- (void)tryPreload;
- (void).cxx_destruct;

@end
