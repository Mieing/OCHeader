@class NSMutableArray;

@interface IESLivePlayerCrossTalkDetectManager : NSObject

@property (retain, nonatomic) NSMutableArray *detectedLivePlayerHashArray;
@property (retain, nonatomic) NSMutableArray *detectedVideoPlayerHashArray;

- (void)doAnalyzeCrossTalkOriginInfo:(id)a0 trackBlock:(id /* block */)a1;
- (BOOL)checkHasReportPlayerWithEnginHashID:(id)a0 isLive:(BOOL)a1;
- (void)triggerALogReport;
- (id)p_handleCrosstalkList:(id)a0;
- (void)analyzeCrossTalkOriginInfo:(id)a0 trackBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
