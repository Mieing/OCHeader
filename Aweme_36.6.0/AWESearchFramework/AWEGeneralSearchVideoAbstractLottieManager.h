@class NSString;

@interface AWEGeneralSearchVideoAbstractLottieManager : NSObject <AWESearchVideoAbstractLottieProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)lightLottiePath;
- (id)blackLottiePath;
- (void)prepareGeckoResources;

@end
