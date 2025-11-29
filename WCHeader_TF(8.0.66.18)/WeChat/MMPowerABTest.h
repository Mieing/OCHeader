@interface MMPowerABTest : NSObject

@property (nonatomic) BOOL disableCdnEnhance;
@property (nonatomic) BOOL disableOffScreen;
@property (nonatomic) BOOL enable30FPS;
@property (nonatomic) BOOL enableQOS;
@property (nonatomic) BOOL strategy2;
@property (nonatomic) BOOL playerFixLock;
@property (nonatomic) BOOL playerFastGetter;
@property (nonatomic) long long audienceInterval;
@property (nonatomic) long long anchorInterval;
@property (nonatomic) long long modelGeneration;

- (id)init;
- (void)setup;
- (BOOL)isNewDevice;

@end
