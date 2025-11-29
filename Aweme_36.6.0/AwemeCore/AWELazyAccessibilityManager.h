@class NSHashTable;

@interface AWELazyAccessibilityManager : NSObject

@property (nonatomic) BOOL isVoiceOverRunning;
@property (retain, nonatomic) NSHashTable *viewObservers;

+ (id)sharedManager;

- (void)voiceOverStatusChange;
- (void)addAccessibilityObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
