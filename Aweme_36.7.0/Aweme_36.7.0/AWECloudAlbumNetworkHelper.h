@interface AWECloudAlbumNetworkHelper : NSObject

+ (void)setUserCloudAlbumUploadAuthoriaztion:(BOOL)a0 completion:(id /* block */)a1;
+ (void)refreshUserCloudAlbumToken:(id /* block */)a0;
+ (void)setUserCloudAlbumSwitch:(BOOL)a0 completion:(id /* block */)a1;
+ (void)requestCloudAlbumLocalAlbumEnterState:(id /* block */)a0;
+ (void)requestPastMemoriesWithType:(long long)a0 cursor:(long long)a1 count:(long long)a2 completion:(id /* block */)a3;
+ (void)requestPastMemoriesMaterialWithEntrance:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)uploadMemoriesAlbumScanResult:(id)a0 newInstalled:(BOOL)a1 completion:(id /* block */)a2;
+ (void)exitThemes:(id)a0 completion:(id /* block */)a1;

@end
