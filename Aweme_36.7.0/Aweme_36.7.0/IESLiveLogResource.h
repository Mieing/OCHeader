@class NSSet, NSMutableDictionary, NSDictionary, IESLiveEventSummary, NSString, NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveLogResource : NSObject <IESLiveLoggerAnalyseService, IESLiveLoggerDowngradeService>

@property (retain, nonatomic) NSMutableDictionary *eventTraker;
@property (retain, nonatomic) IESLiveEventSummary *eventSummary;
@property (retain, nonatomic) NSDictionary *baseMetrics;
@property (retain, nonatomic) NSDictionary *logMetrics;
@property (retain, nonatomic) NSMutableDictionary *fcCV;
@property (retain, nonatomic) NSMutableDictionary *fcMean;
@property (retain, nonatomic) NSDictionary *appStateMetrics;
@property (retain, nonatomic) NSString *maxFrequencyEvent;
@property (retain, nonatomic) NSTimer *heartBeats;
@property (nonatomic) unsigned long long maxFrequency;
@property (nonatomic) double cvThreshold;
@property (nonatomic) double meanThreshold;
@property BOOL bindService;
@property long long resourceDowngrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSSet *strictEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)disposable;
- (void)unBind;
- (void)strictEvents:(id)a0;
- (void)strictDowngrade;
- (void)resumeDowngrade;
- (BOOL)analysable;
- (id)roomInformation;
- (BOOL)disposableControl:(id)a0 event:(id)a1;
- (BOOL)frequencyControl:(id)a0 event:(id)a1;
- (void)analyseLogWithEvent:(id)a0 fileName:(id)a1 content:(id)a2 length:(unsigned long long)a3;
- (void)downgradeRiskHeartBeats;
- (BOOL)executeAnalyser;
- (void)cleanAnalyserCache;
- (void)excuteTask:(id /* block */)a0;
- (void)ifneedDowngradeRisk;
- (id)parseFrequency:(id)a0;
- (id)sortBDAlog:(id)a0 rulekey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)bind;

@end
