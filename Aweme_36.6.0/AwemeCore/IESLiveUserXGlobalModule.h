@class NSString, IESLiveSwitchAccountServiceImpl;

@interface IESLiveUserXGlobalModule : IESLiveModule <IESLiveUserXGlobalModule>

@property (retain, nonatomic) IESLiveSwitchAccountServiceImpl *switchAccountServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)switchAccountService;
- (void).cxx_destruct;

@end
