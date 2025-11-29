@class NSArray, NSString;

@interface AWEExtensionTrackerStorage : AWEExtensionStorage

@property (retain, nonatomic) NSArray *trackedEvents;
@property (readonly, nonatomic) NSString *trackedEventStorageKey;

+ (id)sharedTrackerStorage;

- (void)trackEvent:(id)a0 params:(id)a1 needStagingFlag:(BOOL)a2;
- (void)reset;

@end
