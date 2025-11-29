@class BDARVPlayerContext, BDARMonitorHandleTimeModel;

@interface BDARFirstFrameTime : NSObject

@property (nonatomic) BOOL isInBackground;
@property (nonatomic) BOOL hasEnterBackground;
@property (nonatomic) double duration;
@property (nonatomic) double durationNetRequest;
@property (nonatomic) double durationViewRender;
@property (nonatomic) double durationLynxTemplateLoad;
@property (nonatomic) double durationViewPlayerRender;
@property (nonatomic) double durationLaunch;
@property (nonatomic) double netRequestBegin;
@property (nonatomic) double viewRenderBegin;
@property (nonatomic) double viewPlayerRenderBegin;
@property (nonatomic) double launchStartBegin;
@property (nonatomic) double lynxTemplateBegin;
@property (nonatomic) double videoAppear;
@property (nonatomic) BOOL hasSendTrack;
@property (nonatomic) double videoWidth;
@property (nonatomic) double videoHeight;
@property (retain, nonatomic) BDARVPlayerContext *context;
@property (retain, nonatomic) BDARMonitorHandleTimeModel *monitorTimeModel;

- (void)didEnterBackgroundNotification:(id)a0;
- (void)netRequestStart:(BOOL)a0;
- (void)launchStart:(BOOL)a0;
- (void)willEnterForegroundNotification:(id)a0;
- (id)monitorCategoryData;
- (id)monitorExtraData;
- (void)lynxTemplateLoad:(BOOL)a0;
- (void)viewRenderStart:(BOOL)a0;
- (void)viewPlayerRenderStart:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidDisappear;

@end
