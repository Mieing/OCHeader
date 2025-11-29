@class NSString;

@interface IESLiveNativeAppLifeCycleServiceProviderImpl : NSObject <IESLiveNativeAppLifeCycleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willEnterFullScreen:(id)a0;
- (void)didEnterFullScreen:(id)a0;
- (void)timorVCWillAppear:(id)a0;
- (void)timorVCDidAppear:(id)a0;
- (void)timorVCDidAppear:(id)a0 screenRate:(double)a1;
- (void)timorVCWillDisappear:(id)a0;
- (void)timorVCDidDisappear:(id)a0;
- (void)timorVCWillEnterSmallScreen:(id)a0;
- (void)timorVCDidEnterSmallScreen:(id)a0;
- (void)timorWillCloseXScreenWindow:(id)a0;

@end
