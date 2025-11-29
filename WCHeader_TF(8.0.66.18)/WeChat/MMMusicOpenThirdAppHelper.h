@protocol MMMusicOpenThirdAppHelperDataSource, MMMusicOpenThirdAppHelperDelegate;

@interface MMMusicOpenThirdAppHelper : MMObject

@property (weak, nonatomic) id<MMMusicOpenThirdAppHelperDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicOpenThirdAppHelperDelegate> delegate;

- (void)tryOpenThirdAppWithMusicInfo:(id)a0 andSource:(unsigned long long)a1;
- (void)tryOpenMembershipWithAppId:(id)a0 mid:(id)a1 completion:(id /* block */)a2;
- (void)tryOpenMembershipWithMusicInfo:(id)a0 ticket:(id)a1;
- (void)tryOpenMembershipWithAppId:(id)a0 ticket:(id)a1;
- (void)openQQMusicAppWithMusicInfo:(id)a0 source:(unsigned long long)a1 downloadURL:(id)a2;
- (void)openMusicAppWithScheme:(id)a0 source:(unsigned long long)a1 downloadURL:(id)a2;
- (void)open3rdAppByReqWithMusicInfo:(id)a0 source:(unsigned long long)a1 downloadURL:(id)a2;
- (void)open3rdAppToAppStore:(unsigned long long)a0 downloadURL:(id)a1;
- (void).cxx_destruct;

@end
