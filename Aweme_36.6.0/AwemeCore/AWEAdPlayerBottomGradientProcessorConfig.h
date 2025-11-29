@class NSString, AWEAdPlayerBottomGradientProcessorResult, NSMutableDictionary, NSNumber;

@interface AWEAdPlayerBottomGradientProcessorConfig : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *closeReason;
@property (retain, nonatomic) NSNumber *brightnessStd;
@property (retain, nonatomic) NSNumber *brightnessMean;
@property (nonatomic) long long staticReason;
@property (retain, nonatomic) AWEAdPlayerBottomGradientProcessorResult *staticResult;
@property (nonatomic) long long samplingInterval;
@property (nonatomic) long long delayDuration;
@property (retain, nonatomic) NSMutableDictionary *dynamicResultDict;
@property (nonatomic) BOOL stopDynamicDetect;

- (void).cxx_destruct;
- (id)init;

@end
