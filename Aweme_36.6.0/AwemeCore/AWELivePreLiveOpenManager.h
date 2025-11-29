@class NSString, NSError;

@interface AWELivePreLiveOpenManager : NSObject

@property (retain, nonatomic) NSString *currentEnterPurpose;
@property (retain, nonatomic) NSError *predictionError;
@property (nonatomic) BOOL isPredicting;
@property (nonatomic) double lastPredictTime;
@property (nonatomic) double minInterval;

+ (id)sharedInstance;

- (void)predictEnterPlusPurposeWithCompletion:(id /* block */)a0;
- (void)trackEventWithResult:(id)a0 purpose:(id)a1;
- (void)postEnterPurposeNotification:(id)a0 purpose:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
