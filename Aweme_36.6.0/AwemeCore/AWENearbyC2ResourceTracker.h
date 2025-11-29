@interface AWENearbyC2ResourceTracker : NSObject

@property (nonatomic) unsigned long long pageType;
@property (nonatomic) double didLoadTime;
@property (nonatomic) double startRequestTime;
@property (nonatomic) double endRequestTime;
@property (nonatomic) double startCreateContainerTime;
@property (nonatomic) double startSendLaunchInNaTime;
@property (nonatomic) double endSendLaunchInNaTime;

- (id)initWithPageType:(unsigned long long)a0;
- (void)startCreateContainer;
- (void)startSendLaunchInNa;
- (void)endSendLaunchInNa;
- (void)startRequest;
- (void)endRequest;
- (void)didLoad;

@end
