@class NSString, CaraCppSessionFeatureCenter;

@interface CaraAppleSessionFeatureCenter : NSObject <CaraNativeSessionFeatureCenterBase, ICaraSessionExt>

@property (readonly, nonatomic) CaraCppSessionFeatureCenter *underlying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onConsumeSession:(id)a0 stayTimeInterval:(float)a1;
- (void)onSessionSend:(id)a0;
- (void).cxx_destruct;

@end
