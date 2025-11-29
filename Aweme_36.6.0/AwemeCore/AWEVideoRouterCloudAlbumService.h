@class NSString;

@interface AWEVideoRouterCloudAlbumService : NSObject <AWEStudioCloudAlbumService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEStudioCloudAlbumAdapterClass;

- (BOOL)isPrivatePostCloudAlbumButtonViewHidden;
- (void)updatePrivatePostCloudAlbumButtonViewShowFrequency;
- (Class)privatePostCloudAlbumCollectionViewCellClass;
- (id)privatePostCloudAlbumButtonView;
- (id)privatePostCloudAlbumViewModel;
- (BOOL)shouldShowCloudAlbumSwitch;
- (id)showCloudAlbumOnlinePopupViewEnterFrom:(id)a0;
- (id)showCloudAlbumOfflinePopupView;
- (BOOL)isCloudAlbumOpen;
- (void)updatePrivatePostCloudAlbumButtonViewAppearData;
- (id)aAWEStudioCloudAlbumAdapter;

@end
