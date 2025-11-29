@class NSString;

@interface AWEPadLongVideoPlayerServiceImpl : NSObject <AWEPadLongVideoPlayerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)transitionOptimizeEnableWithContext:(id)a0;
- (void)performLongVideoOptimizeBlock:(id /* block */)a0;
- (BOOL)seekToHistoryWhenContainerRotatingWithContext:(id)a0;

@end
