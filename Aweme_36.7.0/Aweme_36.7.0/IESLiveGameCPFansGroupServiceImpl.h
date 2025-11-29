@class NSString;

@interface IESLiveGameCPFansGroupServiceImpl : NSObject <IESGCPLiveFansGroupService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)followUserByLogin:(id)a0 secUserId:(id)a1 completion:(id /* block */)a2;
- (void)unfollowUser:(id)a0 secUserId:(id)a1 completion:(id /* block */)a2;

@end
