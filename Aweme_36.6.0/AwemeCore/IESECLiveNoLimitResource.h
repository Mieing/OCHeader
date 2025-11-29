@interface IESECLiveNoLimitResource : NSObject <IESECLiveAbstractResource>

- (void)releaseSource;
- (id)addReleaseObserver:(id /* block */)a0;
- (void)removeReleaseObserverForId:(id)a0;
- (BOOL)available;
- (BOOL)hold;
- (void)reset;

@end
