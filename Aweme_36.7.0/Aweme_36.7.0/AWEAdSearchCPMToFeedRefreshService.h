@class NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEAdSearchCPMToFeedRefreshService : HTSService <AWEAdSearchCPMToFeedRefreshService>

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (nonatomic) BOOL disableTrack;
@property (retain, nonatomic) NSMutableDictionary *supportedSearchSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldTrackEvent:(id)a0 scene:(long long)a1;
- (BOOL)supportSearchSource:(id)a0 scene:(long long)a1;
- (void)registerSupportSearchSource:(id)a0 scene:(long long)a1;
- (void)trackWithParams:(id)a0 scene:(long long)a1;
- (void)trackWithParamsInFlow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
