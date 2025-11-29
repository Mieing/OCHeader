@class EcAlbum, PHAsset, NSString;

@interface AWECloudAlbumPrivatePostModel : NSObject <AWECloudAlbumModelProtocol>

@property (retain, nonatomic) EcAlbum *album;
@property (retain, nonatomic) PHAsset *localAsset;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic, getter=isUploading) BOOL uploading;
@property (copy, nonatomic) id /* block */ refreshCloudAlbumBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLocalAlbum;
- (void)refreshLocalAlbum;
- (void)latestLocalImageWithCompletion:(id /* block */)a0;
- (BOOL)isEqualToAlbumID:(long long)a0;
- (void)uploadTaskChangeWith:(long long)a0 isUploading:(BOOL)a1;
- (void)gotoAlbumDetailPage;
- (id)initWithEcAlbum:(id)a0;
- (void).cxx_destruct;

@end
