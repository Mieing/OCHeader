@class NSString;

@interface AWEAwemeDetailContainerTransitionConfig : NSObject

@property (copy, nonatomic) id /* block */ awemeDetailContainerTransitionCustomProviderBlock;
@property (nonatomic) BOOL enableTransitionTriggerDirectionDown;
@property (nonatomic) BOOL disableTransitionTriggerDirectionUp;
@property (nonatomic) BOOL enableCustomLiveTransitionType;
@property (nonatomic) unsigned long long transitionType;
@property (copy, nonatomic) NSString *interactiveLiveProviderClassName;
@property (copy, nonatomic) NSString *noneInteractiveLiveProviderClassName;
@property (copy, nonatomic) NSString *uniqueProviderClassName;
@property (copy, nonatomic) NSString *interactiveProviderClassName;
@property (copy, nonatomic) NSString *noneInteractiveProviderClassName;
@property (nonatomic) BOOL enableUseConfigurationAnimationDuration;
@property (nonatomic) double animationDuration;

- (void).cxx_destruct;

@end
