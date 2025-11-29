@class NSString, CADisplayLink, NSMutableDictionary, WCFPSRecorder, WCFPSMonitorConfig, NSObject;
@protocol OS_dispatch_queue, WCFPSMonitorPluginDelegate, WCReportStrategyDelegate;

@interface WCFPSMonitorPlugin : MatrixPlugin {
    int m_nextRecordID;
    WCFPSRecorder *m_currRecorder;
    double m_beginTime;
    double m_lastTime;
    double m_dropTime;
    int m_frameCount;
    CADisplayLink *m_displayLink;
    NSString *m_scene;
    NSMutableDictionary *m_customInfo;
    double m_hitchTime;
    double m_scrollTime;
    double m_targetTimestamp;
    NSMutableDictionary *m_sceneMaxTimeDict;
    NSObject<OS_dispatch_queue> *m_pluginReportQueue;
}

@property (retain, nonatomic) WCFPSMonitorConfig *pluginConfig;
@property (weak, nonatomic) id<WCFPSMonitorPluginDelegate> delegate;
@property (weak, nonatomic) id<WCReportStrategyDelegate> reportDelegate;

+ (id)getTag;

- (id)init;
- (BOOL)start;
- (void)stop;
- (void)clearRecordData;
- (void)startFPSLogger:(id)a0 scene:(id)a1 customInfo:(id)a2;
- (void)stopFPSLogger;
- (void)cancelFPSLogger;
- (void)onFrameCallback:(id)a0;
- (void)calcHitchTime;
- (void)startPreScrollLogger:(id)a0 scene:(id)a1 customInfo:(id)a2;
- (void)cancelPreScrollLogger;
- (void)stopPreScrollLogger;
- (void)createNewRecorder;
- (void)uploadReportOnStrategy:(id)a0;
- (void)reportIssueCompleteWithIssue:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end
