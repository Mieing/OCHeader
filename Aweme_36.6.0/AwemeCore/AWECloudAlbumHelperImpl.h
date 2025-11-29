@class NSString;

@interface AWECloudAlbumHelperImpl : NSObject <AWECloudAlbumHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)inTodayAwemeFirstPageResponseFromCacheWithPastType:(long long)a0;
- (long long)inTodayAwemeFirstPageResponseFromCacheType;
- (void)setCloudAlbumSwitch:(long long)a0;
- (long long)cloudAlbumUploadAuthorization;
- (void)setCloudAlbumUploadAuthorization:(long long)a0;
- (void)showCloudAlbumOnlinePopupViewWithEnterFrom:(id)a0 execute:(id /* block */)a1;
- (long long)cloudAlbumSwitchValue;
- (BOOL)cloudAlbumUploadAuthorizationEnable;
- (void)authorizationToUploadWithCompletion:(id /* block */)a0;
- (void)updateUserSettingWithCompletion:(id /* block */)a0;
- (void)showInTodayAggregatePhtotAuthorizationPopupViewWithEnterFrom:(id)a0 isOwnPhoto:(BOOL)a1 schemaData:(id)a2 execute:(id /* block */)a3;

@end
