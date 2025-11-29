@class NSString, AWEIMCodeGenFriendsAlbumPhotoInfoModel;

@interface AWEIMCodeGenFriendsAlbumVideoInfoModel : AWEBaseDataModel <AWEIMEncryptCoverResourceProtocol>

@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumPhotoInfoModel *posterModel;
@property (copy, nonatomic) NSString *tosKey;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) double duration;
@property (nonatomic) int isNewEncrypt;
@property (nonatomic) int useOriginVideo;

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
