@class NSDictionary, NSString, NSDate;

@interface IESGCPAudienceDetailExitWidget : IESGCPBaseWidget <IESGCPAudienceDetailActions, IESGCPAudienceDetailCloseGameRouter>

@property (nonatomic) BOOL isExitFromXPlayGame;
@property (retain, nonatomic) NSDate *exitFromGameTime;
@property (retain, nonatomic) NSDictionary *commonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)didCloseGameDetailView;
- (void)widgetBindService;
- (void)exitFromXPlayGameWithCommonParams:(id)a0;
- (void)showLeftSideBarAnimationIfNeeded;
- (void)trackSideDynamicStartRequest;
- (void)trackSideDynamicStartRequestResult:(long long)a0;
- (void).cxx_destruct;
- (id)dataModel;

@end
