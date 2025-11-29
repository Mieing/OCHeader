@class NSCache;
@protocol AFDPreloadConditionControllerDelegate, AFDPreloadConditionControllerEventLogger;

@interface AFDPreloadConditionController : NSObject

@property (retain, nonatomic) NSCache *URLPathLookupTable;
@property (weak, nonatomic) id<AFDPreloadConditionControllerDelegate> delegate;
@property (weak, nonatomic) id<AFDPreloadConditionControllerEventLogger> eventLogger;

- (void)handleEventStateDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (void)logEvent:(id)a0;

@end
