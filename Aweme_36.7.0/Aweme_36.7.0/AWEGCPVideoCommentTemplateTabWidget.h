@class NSString;

@interface AWEGCPVideoCommentTemplateTabWidget : IESGCPBaseWidget <AWEGCPCommentTemplateTabRouter>

@property (nonatomic) BOOL diOptEnable;
@property (nonatomic) double commentTemplateTabShowTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commentTemplateReportPageDurationWithAweme:(id)a0;
- (void)trackGameCommentTabTitleClickEventWithAweme:(id)a0;
- (void)trackGameCommentTabTitleShowEventWithAweme:(id)a0;
- (id)commentTemplateCustomTrackContextString;
- (long long)commentTemplateTabCountWithAweme:(id)a0;
- (id)commentTemplateTabTitleWithAweme:(id)a0;
- (BOOL)shouldShowGameCPCommentTab:(id)a0;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (id)getTrackParamsWithAwemeModel:(id)a0;

@end
