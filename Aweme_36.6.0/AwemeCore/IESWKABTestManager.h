@interface IESWKABTestManager : NSObject

@property (class, readonly, nonatomic) IESWKABTestManager *sharedManager;

@property (nonatomic, getter=shouldUseCookiePlugin) BOOL useCookiePlugin;
@property (nonatomic, getter=shouldUseLiveVideoComponentPlugin) BOOL useLiveVideoComponentPlugin;

- (id)init;

@end
