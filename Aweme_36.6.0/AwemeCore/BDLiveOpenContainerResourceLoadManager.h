@interface BDLiveOpenContainerResourceLoadManager : NSObject

+ (id)sharedInstance;

- (void)loadResourceWithInfo:(id)a0 callbacks:(id)a1;
- (void)preloadWithInfo:(id)a0 callback:(id /* block */)a1;

@end
