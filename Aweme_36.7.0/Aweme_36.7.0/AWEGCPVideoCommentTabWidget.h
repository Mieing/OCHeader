@class NSString, UIViewController;
@protocol AWEGCPCommentTabControllerProtocol;

@interface AWEGCPVideoCommentTabWidget : IESGCPBaseWidget <AWEGCPCommentTabRouter>

@property (nonatomic) BOOL diOptEnable;
@property (retain, nonatomic) UIViewController<AWEGCPCommentTabControllerProtocol> *commentTabViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createGameCPCommentTabVC:(id)a0;
- (void)trackGameCommentTabShowEventWithAweme:(id)a0;
- (void)trackGameCommentTabClickEventWithAweme:(id)a0 actionWay:(id)a1;
- (id)commentTabTitleWithAweme:(id)a0;
- (BOOL)shouldShowGameCPCommentTab:(id)a0;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (id)getTrackParamsWithAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
