@interface WCFinderFeedArrayWatcher : NSObject

+ (id)watchSnapshot:(id /* block */)a0;
+ (id)watchFeedArrayChange:(id)a0 action:(SEL)a1;
+ (id)watchBatchUpdate:(id)a0 action:(SEL)a1;

- (void)onFeedArraySourceDidChange:(id)a0;

@end
