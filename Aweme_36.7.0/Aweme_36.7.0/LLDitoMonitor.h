@class NSMutableDictionary, NSDictionary, NSString, LLDitoPageContext, NSMutableArray, IESLLPOIPageTracker;
@protocol LLDitoMonitorDelegateProtocol;

@interface LLDitoMonitor : NSObject <IESLLPOIPageTrackerDelegate>

@property (retain, nonatomic) NSMutableDictionary *eventPool;
@property (retain, nonatomic) NSMutableArray *eventNameArray;
@property (nonatomic) BOOL isFmpEnd;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSDictionary *pageParams;
@property (retain, nonatomic) IESLLPOIPageTracker *pageTracker;
@property (weak, nonatomic) id<LLDitoMonitorDelegateProtocol> delegate;
@property (copy, nonatomic) NSString *pageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePoiFmpCompleteParams:(id)a0;
- (void)sendPageEvent:(id)a0 extraParams:(id)a1;
- (void)sendPageEvent:(id)a0 eventTime:(double)a1 extraParams:(id)a2;
- (id)monitorModelWithEventName:(id)a0 vm:(id)a1;
- (void)startComponentEvent:(id)a0 componentViewModel:(id)a1;
- (void)sendComponentEvent:(id)a0 componentViewModel:(id)a1;
- (void)doTrack;
- (void).cxx_destruct;
- (id)init;

@end
