@class TTObservationBuffer;

@interface TTDownloadDynamicThrottle : NSObject

@property (copy) id /* block */ onDoThrottle;
@property (retain) TTObservationBuffer *observationBuff;
@property unsigned char observationBufferLength;
@property (retain) TTObservationBuffer *checkObservationBuff;
@property unsigned char checkObservationBufferLength;
@property unsigned char measureTimes;
@property unsigned char measureTimesMax;
@property long long bandWidth;
@property long long startThrottleBandWidthMin;
@property BOOL isDynamicBalance;
@property long long reserveBandWidth;
@property unsigned char rttGap;
@property unsigned char speedGap;
@property float matchConditionPercent;
@property long long dynamicBalanceDivisionThreshold;
@property float bandwidthDeltaCoefficient;
@property long long bandwidthDeltaConstant;

- (void)startMeasureBandwidth;
- (id)createObservation:(id)a0 netQualityType:(long long)a1 speed:(long long)a2 throttleSpeed:(long long)a3;
- (void)doThrottle:(id)a0;
- (void)createObservationAndCheck:(id)a0;
- (void)doDynamicBalance:(id)a0;
- (void)doReserveBandWidth:(id)a0;
- (id)initWithOutputAction:(id /* block */)a0 params:(id)a1 throttleSpeed:(long long)a2;
- (void)setDynamicThrottleSpeed:(long long)a0;
- (void)dynamicCheckAndThrottle:(id)a0 netQualityType:(long long)a1 speed:(long long)a2 throttleSpeed:(long long)a3;
- (void)inputUserRtt:(unsigned long long)a0;
- (void)inputTcpRtt:(unsigned long long)a0;
- (void).cxx_destruct;

@end
