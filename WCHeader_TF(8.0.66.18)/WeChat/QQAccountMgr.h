@class NSString;

@interface QQAccountMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)clearWBSX;
- (void)clearQQFriend;
- (void)clearQQInvite;
- (void)clearWBReader;
- (void)clearQQData;
- (void)uninstallQQPluginWithoutCGI;
- (void)clearQQFlags;
- (BOOL)bindQQ:(id)a0 completion:(id /* block */)a1;
- (BOOL)unBindQQ:(id)a0 completion:(id /* block */)a1;
- (void)unBindQQclearQQ;
- (void)handleUnBindQQ;
- (void)handleBindQQ:(id)a0 request:(id)a1;

@end
