@class NSString, CAMediaTimingFunction;

@interface IESECSliceXBasicAnimationConfig : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double repeatCount;
@property (retain, nonatomic) NSString *fillMode;
@property (nonatomic) double startRotate;
@property (nonatomic) double endRotate;

- (void).cxx_destruct;
- (id)init;

@end
