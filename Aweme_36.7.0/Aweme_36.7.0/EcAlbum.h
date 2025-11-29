@class NSString, EcAsset, EcClient;

@interface EcAlbum : NSObject

@property (class, readonly, nonatomic) long long FROM_CAMERA;

@property (nonatomic) long long albumId;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) EcAsset *cover;
@property (nonatomic) unsigned long long createdAt;
@property (nonatomic) unsigned long long updateAt;
@property (nonatomic) BOOL isDeleted;
@property (weak, nonatomic) EcClient *client;

- (id)initWithTag:(id)a0 client:(id)a1;
- (id)initWithAlbumId:(long long)a0 deleted:(BOOL)a1;
- (BOOL)isFromCamera;
- (id)initWithTagModel:(id)a0 client:(id)a1;
- (void).cxx_destruct;

@end
