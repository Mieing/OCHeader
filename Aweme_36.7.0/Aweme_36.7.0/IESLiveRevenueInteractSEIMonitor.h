@class IESLiveCountTimer, NSString;

@interface IESLiveRevenueInteractSEIMonitor : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveCountTimer *timeoutTimer;
@property (nonatomic) double startCreateMediaTime;
@property (nonatomic) double startSEIListenerMediaTime;
@property (copy, nonatomic) NSString *resolutionTypeFrom;
@property (copy, nonatomic) NSString *resolutionTypeTo;
@property (nonatomic) BOOL isReloadStreamData;
@property (nonatomic) BOOL reloadStreamDataEnabled;
@property (nonatomic) long long anchorVersion;
@property (nonatomic, getter=isNewStart) BOOL newStart;

- (void)cancelTimeoutTimer;
- (id)interactProvider;
- (id)initWithDIContext:(id)a0 fromScene:(unsigned long long)a1;
- (void)resetStartCreateTimeForNewStart:(BOOL)a0;
- (void)recoverResolutionStream;
- (void)clearStartTime;
- (void)resetStartSEIListenerTimeForNewStart:(BOOL)a0;
- (void)reportDurationEventForResult:(id)a0;
- (void)changeResolutionStream;
- (void).cxx_destruct;
- (BOOL)hasValidStartTime;
- (void)startTimeoutTimer;

@end
