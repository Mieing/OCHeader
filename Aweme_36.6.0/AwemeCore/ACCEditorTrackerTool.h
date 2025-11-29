@class NSString, NSMutableDictionary;

@interface ACCEditorTrackerTool : NSObject <ACCComponentLogDelegate>

@property (retain, nonatomic) NSMutableDictionary *traceTimeDic;
@property (retain, nonatomic) NSMutableDictionary *componentTimeDic;
@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) ACCEditorTrackerTool *editorTrackerTool;
@property (nonatomic) BOOL hasReportFirstFrameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackerDic;
- (void)logComponent:(id)a0 selector:(SEL)a1 duration:(double)a2;
- (void)startTraceTimeForKey:(id)a0;
- (void)cleanTraceTime;
- (void)stopTraceTimeForKey:(id)a0;
- (void)addTrackTime:(double)a0 key:(id)a1;
- (void)correctUploadFirstFrameDurationWithTrackTime:(double)a0;
- (void)trackPlayerFirstFrameRenderIfNeed:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
