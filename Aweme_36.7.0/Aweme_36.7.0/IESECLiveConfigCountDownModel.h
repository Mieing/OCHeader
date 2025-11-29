@class NSNumber, NSString;

@interface IESECLiveConfigCountDownModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long startInterval;
@property (nonatomic) long long endInterval;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) double expectedEndTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidWithServerTime:(id)a0;
- (void)decreaseSeconds:(long long)a0;
- (double)realCountDownInterVal;
- (id)countDownAttributedStringWithFontSize:(double)a0 textColor:(id)a1 appendString:(id)a2 showRange:(long long)a3;
- (void)decreaseIntervalSeconds:(long long)a0;
- (id)countDownAttributedStringWithFontSize:(double)a0 textColor:(id)a1 appendString:(id)a2 timeType:(long long)a3 ignoreLocalTimeGapControl:(BOOL)a4;
- (id)countDownAttributedStringWithFontSize:(double)a0 textColor:(id)a1 appendString:(id)a2;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
