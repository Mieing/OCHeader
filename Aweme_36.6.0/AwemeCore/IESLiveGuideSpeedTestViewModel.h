@class LSUploadBandwidthProber, PreviewStreamInfo, HTSEventContext, IESLiveCDNSpeedTestApi, IESLivePushStreamLogger;
@protocol IESLiveAnchorDynamicClarityPreferenceService, IESLiveGuideSpeedTestViewModelDelegate;

@interface IESLiveGuideSpeedTestViewModel : NSObject

@property (nonatomic) unsigned long long liveType;
@property (nonatomic) unsigned long long currentState;
@property (retain, nonatomic) PreviewStreamInfo *streamInfo;
@property (retain, nonatomic) id<IESLiveAnchorDynamicClarityPreferenceService> clarityPreference;
@property (retain, nonatomic) IESLiveCDNSpeedTestApi *speedTestApi;
@property (retain, nonatomic) LSUploadBandwidthProber *speedTestProber;
@property (retain, nonatomic) IESLivePushStreamLogger *pushStreamLogger;
@property (weak, nonatomic) id<IESLiveGuideSpeedTestViewModelDelegate> delegate;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (id)initWithLiveType:(unsigned long long)a0;
- (id)getRoomMode;
- (int)liveTypeEnumFromLiveType:(unsigned long long)a0;
- (void)setupProber;
- (void)trackSpeedTestResult:(long long)a0 level:(id)a1 errorReason:(long long)a2 maxResolution:(id)a3 historyResolution:(id)a4;
- (void)requestStreamInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stopTest;
- (void)startTest;

@end
