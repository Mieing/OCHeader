@class NSString, MAVPagTransitionEffect;

@interface MVVideoTransition : NSObject

@property (nonatomic) long long beginPts;
@property (nonatomic) long long duration;
@property (retain, nonatomic) MAVPagTransitionEffect *transitionEffect;
@property (retain, nonatomic) NSString *transtionPath;
@property (nonatomic) long long videoIdBeforeTransition;
@property (nonatomic) long long videoIdAfterTransition;

- (BOOL)containsPts:(long long)a0;
- (void).cxx_destruct;

@end
