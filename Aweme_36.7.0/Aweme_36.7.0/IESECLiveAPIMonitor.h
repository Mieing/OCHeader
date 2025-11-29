@class IESECLiveTracker, IESECHybridParamsVerifyHelper, IESECLiveContext;

@interface IESECLiveAPIMonitor : NSObject

@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECHybridParamsVerifyHelper *verifyHelper;
@property (nonatomic) BOOL verifyHelperLoaded;

+ (id)monitorParamsFormat:(id)a0 requestResult:(id)a1;
+ (id)monitorParamsFormat:(id)a0;

- (id)initWithLiveContext:(id)a0;
- (void)reportRequestWithRequestResult:(id)a0;
- (void)setupVerifyHelper;
- (void)excuteVerifyCheckWithParamsArray:(id)a0;
- (void).cxx_destruct;

@end
