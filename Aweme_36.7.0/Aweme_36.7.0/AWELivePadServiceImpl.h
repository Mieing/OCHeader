@class NSString;

@interface AWELivePadServiceImpl : NSObject <IESLivePadService>

@property (nonatomic) BOOL hasReleasePages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadReleasePagesAdapterClass;
+ (Class)aAWEPadPlayerReleaseAdapterClass;

- (void)startObserverMemory;
- (void)stopObserverMemory;
- (id)aAWEPadReleasePagesAdapter;
- (void)innerFeedWillAppear;
- (void)innerFeedDidAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedDidDisappear;
- (id)aAWEPadPlayerReleaseAdapter;
- (void)releaseMiddlePages;
- (void)trackReleaseMiddlePages:(unsigned long long)a0;

@end
