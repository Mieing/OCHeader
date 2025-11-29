@class NSDictionary, NSString;

@interface IESLiveStabilityDiagnose : NSObject <IESLiveDiagnoseService>

@property (retain, nonatomic) NSDictionary *diagnoseMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (long long)diagnoseType;
- (void)openDiagnose;
- (void)closeDiagnose;
- (void).cxx_destruct;
- (id)init;
- (void)preload;

@end
