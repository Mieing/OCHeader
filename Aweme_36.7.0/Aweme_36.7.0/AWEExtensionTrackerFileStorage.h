@class NSArray, NSURL;

@interface AWEExtensionTrackerFileStorage : AWEExtensionStorage

@property (retain, nonatomic) NSArray *trackedEvents;
@property (retain, nonatomic) NSURL *fileURL;

+ (id)sharedTrackerStorage;

- (void)trackEvent:(id)a0 params:(id)a1 needStagingFlag:(BOOL)a2;
- (void).cxx_destruct;
- (void)reset;

@end
