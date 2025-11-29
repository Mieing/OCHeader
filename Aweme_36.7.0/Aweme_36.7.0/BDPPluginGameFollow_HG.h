@class NSString, NSMutableDictionary, BDPFollowUserModel, BDPUniqueID;

@interface BDPPluginGameFollow_HG : BDPBridgeInstancePlugin <BDPFollowUserViewFollowLogicProtocol_HG> {
    NSMutableDictionary *_btnDataDict;
    NSMutableDictionary *_btnDict;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPFollowUserModel *userInfo;
@property (nonatomic) BOOL isPrefetchingInfos;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) BOOL isPrefetchingInfosSucceed;
@property (copy, nonatomic) id /* block */ prefetchingAllInfosCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasFollowed;
- (void)requestFollowUserWithCallback:(id /* block */)a0;
- (id)parseRequestFollowUser:(id)a0 andJsonObj:(id)a1 response:(id)a2;
- (void)checkFollowStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)_onClickFollowEntry:(id)a0;
- (void)_fetchAllFollowInfosByForce:(id /* block */)a0;
- (void)createFollowButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateFollowButtonWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
