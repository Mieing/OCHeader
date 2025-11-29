@protocol IESIMGeckoManagerProtocol;

@interface AWEIMResourceOfflineManager : NSObject

@property (retain, nonatomic) id<IESIMGeckoManagerProtocol> manager;

+ (void)_aweLazyRegisterLoadWhenDylibLoad;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
