@class MAInternalMapStatus, MAMediaTimingFunction;

@interface MAMapAnimation : NSObject {
    MAInternalMapStatus *_currentValue;
}

@property (retain, nonatomic) MAMediaTimingFunction *timingFunc;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (retain, nonatomic) MAInternalMapStatus *beginValue;
@property (retain, nonatomic) MAInternalMapStatus *endValue;
@property (copy, nonatomic) id /* block */ beginCallback;
@property (copy, nonatomic) id /* block */ endCallback;
@property (nonatomic) long long timingFuncType;
@property (nonatomic) BOOL isUserAction;
@property (nonatomic) BOOL cancelled;

- (void).cxx_destruct;
- (id)currentValue;
- (void)step:(double)a0;

@end
