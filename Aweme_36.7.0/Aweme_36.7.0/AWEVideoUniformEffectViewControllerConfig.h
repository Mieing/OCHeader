@class AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface AWEVideoUniformEffectViewControllerConfig : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) unsigned long long scene;

- (void).cxx_destruct;

@end
