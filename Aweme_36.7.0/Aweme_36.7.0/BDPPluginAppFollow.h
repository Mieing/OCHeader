@class NSString, BDPUniqueID, BDPFollowUserModel;

@interface BDPPluginAppFollow : BDPBridgeInstancePlugin <BDPFollowUserViewFollowLogicProtocol> {
    BOOL _isFollowed;
    BOOL _isPrefetchingInfos;
    BOOL _isPrefetchingInfosSucceed;
    id /* block */ _prefetchingAllInfosCallBack;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFollowUserModel *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasFollowed;
- (id)parseRequestFollowUser:(id)a0;
- (void)requestFollowUserWithCallback:(id /* block */)a0;
- (void)followOfficialAccountWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)checkFollowStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
