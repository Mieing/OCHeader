@class NSMutableDictionary;

@interface AWEDataLayerNetworkRequestFrequencyControlManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestIdToTimestampMap;

+ (id)sharedManager;

- (void)didFinishRequest:(id)a0;
- (BOOL)validateRequestIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)didEnterBackground;

@end
