@class NSDictionary, NSString;
@protocol IWAWebViewPluginDelegate, IWATimelineService;

@interface WAWebViewPlugin_Timeline : WAWebViewPluginBase <IWATimelineCommitDelegate>

@property (retain, nonatomic) id<IWATimelineService> timelineService;
@property (retain, nonatomic) NSDictionary *wmpfCustomParams;
@property (nonatomic) BOOL shouldShowShareTimelineMenu;
@property (weak, nonatomic) id<IWAWebViewPluginDelegate> resultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSharing;
- (void)notifyToShareTimelineWithCustomParams:(id)a0;
- (id)genTimelineDataToShare:(id)a0;
- (id)genTimelineDataToShareImage:(id)a0;
- (void)shareTimelineData:(id)a0;
- (id)pluginReportPageEvent;
- (void)reportShareTimeline:(id)a0;
- (unsigned int)getAppType;
- (void)cleanWhenShareEnd;
- (void)onDoneForwardForForwardView:(id)a0 timelineData:(id)a1;
- (void)onCancelForwardForForwardView:(id)a0 timelineData:(id)a1;
- (void).cxx_destruct;

@end
