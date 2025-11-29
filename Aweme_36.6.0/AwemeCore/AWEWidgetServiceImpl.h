@interface AWEWidgetServiceImpl : HTSService <HTSService, AWEWidgetServiceProtocol>

+ (id)sharedInstance;

- (void)checkWidgetInstalledWithKind:(id)a0 completion:(id /* block */)a1;
- (void)widgetInfosWithKind:(id)a0 completion:(id /* block */)a1;
- (void)reloadTimelineForKind:(id)a0;
- (void)checkWidgetsInstalledCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reloadTimeline;

@end
