@class NSString;

@interface IESLivePreloadRequestABManager : NSObject <IESLivePreloadRequestABManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)livePreloadRequestEnable;
+ (BOOL)liveBackendRequestOnDemandEnable;
+ (BOOL)liveBackendRequestChunkEnable;
+ (BOOL)liveBackendRequestEnable;
+ (id)liveBackendRequestInvalids;
+ (id)livePreloadRequestInvalids;


@end
