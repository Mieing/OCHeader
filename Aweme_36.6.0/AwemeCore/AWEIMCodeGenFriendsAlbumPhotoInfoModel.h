@class NSString;

@interface AWEIMCodeGenFriendsAlbumPhotoInfoModel : AWEBaseDataModel <AWEIMEncryptCoverResourceProtocol>

@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *mediumUrl;
@property (copy, nonatomic) NSString *largeUrl;
@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *fileType;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) int useOriginImage;

+ (id)JSONKeyPathsByPropertyKey;

- (id)coverObjectID;
- (id)coverSecretKey;
- (id)coverMd5;
- (id)localCoverPath;
- (id)coverDisplayUrl;
- (id)localOriginalPath;
- (id)originDisplayUrl;
- (int)coverAttachmentFileType;
- (int)originalAttachmentFileType;
- (struct CGSize { double x0; double x1; })coverSize;
- (id)compareKey;
- (void).cxx_destruct;

@end
