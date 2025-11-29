@class NSString, OHRHandPredictConfig, OHRHoldHandPredictConfig, OHRWetHandPredictConfig;

@interface OHRServiceConfig : NSObject <OHRServiceConfig>

@property (nonatomic) BOOL enableInterceptPredict;
@property (nonatomic) BOOL enableTouchAreaCalc;
@property (retain, nonatomic) OHRHandPredictConfig *ohrConfig;
@property (retain, nonatomic) OHRWetHandPredictConfig *whrConfig;
@property (retain, nonatomic) OHRHoldHandPredictConfig *hhrConfig;
@property (copy, nonatomic) id /* block */ fetchSensorDataBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
