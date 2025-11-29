@interface AWEGrouponHalfScreenAnimation : NSObject

@property (nonatomic) unsigned long long containerViewState;

- (BOOL)isValidAnimation;
- (long long)animationValue;
- (id)animationType;

@end
