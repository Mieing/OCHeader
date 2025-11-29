@class NSString;

@interface IESGCPLiveAudienceClarityServiceImpl : NSObject <IESGCPLiveAudienceClarityService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveLowestResolutionKey;
- (BOOL)liveStreamStoreResolutionIsValid:(id)a0;
- (void)switchQualityWithResolutionKey:(id)a0 completion:(id /* block */)a1;

@end
