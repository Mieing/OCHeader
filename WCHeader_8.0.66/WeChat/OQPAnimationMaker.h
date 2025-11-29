@class CAAnimation;

@interface OQPAnimationMaker : NSObject

@property (readonly, nonatomic) id /* block */ fromValue;
@property (readonly, nonatomic) id /* block */ toValue;
@property (readonly, nonatomic) id /* block */ byValue;
@property (readonly, nonatomic) id /* block */ animations;
@property (retain, nonatomic) CAAnimation *animation;
@property (readonly, nonatomic) id /* block */ removedOnCompletion;
@property (readonly, nonatomic) id /* block */ timingFunction;
@property (readonly, nonatomic) id /* block */ beginTime;
@property (readonly, nonatomic) id /* block */ timeOffset;
@property (readonly, nonatomic) id /* block */ repeatCount;
@property (readonly, nonatomic) id /* block */ repeatDuration;
@property (readonly, nonatomic) id /* block */ duration;
@property (readonly, nonatomic) id /* block */ speed;
@property (readonly, nonatomic) id /* block */ autoreverses;
@property (readonly, nonatomic) id /* block */ fillMode;

- (void).cxx_destruct;

@end
