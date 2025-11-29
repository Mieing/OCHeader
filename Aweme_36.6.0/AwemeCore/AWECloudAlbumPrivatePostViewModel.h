@class NSString, EcPageData, NSMutableArray, NSNumber;
@protocol AWECloudAlbumChangeProtocol;

@interface AWECloudAlbumPrivatePostViewModel : NSObject <EcAlbumChangeDelegagte, AWECloudAlbumUserChangeProtocol, EcTaskChangeProtocol, AWECloudAlbumPrivatePostViewModel>

@property (retain, nonatomic) NSMutableArray *albumList;
@property (retain, nonatomic) EcPageData *pageData;
@property (nonatomic) BOOL albumChanging;
@property (retain, nonatomic) NSNumber *localAlbumStateSession;
@property (nonatomic) BOOL hasTrackLocalAlbumEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECloudAlbumChangeProtocol> delegate;

- (void)albumChanges:(id)a0;
- (void)albumDelChanges:(id)a0;
- (void)taskItemChanges:(id)a0;
- (void)taskProgressChanges:(id)a0;
- (void)taskStateChanges:(id)a0;
- (id)removeLocalAlbum;
- (void)cloudAlbumUploadAssetWithCompletion:(id /* block */)a0;
- (void)willDisplayCloudAlbum:(id)a0;
- (void)clearLocalAlbumDisplayRecord;
- (void)fetchPrivatePostCloudAlbumListWithCompletion:(id /* block */)a0;
- (void)fetchNextPrivatePostCloudAlbumListWithCompletion:(id /* block */)a0;
- (void)ecUserChangedFrom:(long long)a0 to:(long long)a1;
- (void)cloudAlbumClose:(id)a0;
- (BOOL)enableShowCloudAlbumList;
- (void)p_albumChanges:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasMore;
- (void)dealloc;

@end
