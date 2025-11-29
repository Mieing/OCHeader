@class IESLiveAvatarServiceImpl, IESLiveEffectMixInfoHandler, IESLiveDressServiceWapper, NSString;

@interface IESLivePrivilegeGlobalModule : IESLiveModule <IESLivePrivilegeGlobalModule>

@property (retain, nonatomic) IESLiveDressServiceWapper *dressServiceImpl;
@property (retain, nonatomic) IESLiveEffectMixInfoHandler *effectNodeHandler;
@property (retain, nonatomic) IESLiveAvatarServiceImpl *avatarServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarService;
- (id)JSBHandler;
- (id)dressResourceService;
- (id)effectService;
- (id)dressService;
- (void).cxx_destruct;

@end
