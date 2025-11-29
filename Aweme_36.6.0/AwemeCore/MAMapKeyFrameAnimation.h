@class NSArray, MAInternalMapStatus, MAMapAnimation;

@interface MAMapKeyFrameAnimation : MAMapAnimation {
    MAInternalMapStatus *_currentValue;
    MAMapAnimation *_currentAnimation;
    int _prevFromIndex;
}

@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSArray *keyTimes;
@property (retain, nonatomic) NSArray *timingFunctions;

- (void).cxx_destruct;
- (id)currentValue;
- (id)init;
- (void)step:(double)a0;

@end
