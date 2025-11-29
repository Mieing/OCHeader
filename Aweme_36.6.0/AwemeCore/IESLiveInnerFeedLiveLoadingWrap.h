@class LOTAnimationView;

@interface IESLiveInnerFeedLiveLoadingWrap : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL forceOpen;
@property (nonatomic) double delayDuration;
@property (nonatomic) long long loadingType;
@property (retain, nonatomic) LOTAnimationView *lotAnimationView;

- (void)startLoadingAnimationWithSuperView:(id)a0;
- (void)refreshLoadingWithSuperView:(id)a0;
- (BOOL)checkResourceExist;
- (void)_realStartLoadingAnimationWithSuperView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)stopLoadingAnimation;

@end
