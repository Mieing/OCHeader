@class NSArray, IESLiveAudienceContainerContext, IESLiveMonitorContext;
@protocol IESLiveAudienceCoreTrackerDelegate;

@interface IESLiveAudienceCoreTracker : NSObject

@property (retain, nonatomic) IESLiveAudienceContainerContext *context;
@property (retain, nonatomic) NSArray *paramProviders;
@property (weak, nonatomic) id<IESLiveAudienceCoreTrackerDelegate> delegate;
@property (retain, nonatomic) IESLiveMonitorContext *monitorContext;

- (void)didSetAttachingDIContext;
- (void)trackFirstFrameFail:(id)a0 extraParam:(id)a1;
- (id)initWithContainerContext:(id)a0;
- (void)clearFirstFrameReportRecord;
- (void)trackFirstFrameDurationWithExtraParam:(id)a0;
- (id)trackLivePlay;
- (void)setupCoreEventParamsProvider;
- (id)businessParamsWithEvent:(id)a0 originalParams:(id)a1;
- (BOOL)firstFrameCanReport;
- (double)streamFirstFrameDuration;
- (id)firstFrameCommonParams;
- (void).cxx_destruct;

@end
