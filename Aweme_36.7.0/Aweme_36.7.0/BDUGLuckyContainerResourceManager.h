@class NSMutableDictionary;

@interface BDUGLuckyContainerResourceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *blockGeckoVersionsDict;

+ (void)registerAccessKey;
+ (void)initializeResourceProbe;
+ (void)initIESGurdKit;
+ (id)sharedInstance;

- (void)setupInitialization;
- (void)settingsDidUpdateAction;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
