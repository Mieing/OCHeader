@interface IESECLiveCarouselAnimationConfig : NSObject

@property (nonatomic) double interval;
@property (nonatomic) double appearInterval;
@property (nonatomic) double disappearInterval;
@property (nonatomic) double secondItemAppearTimeOffset;
@property (nonatomic) BOOL repeats;
@property (copy, nonatomic) id /* block */ appearAnimation;
@property (copy, nonatomic) id /* block */ disappearAnimation;

- (void).cxx_destruct;
- (id)init;

@end
