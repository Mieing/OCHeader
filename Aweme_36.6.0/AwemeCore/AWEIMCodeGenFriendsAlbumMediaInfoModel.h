@class AWEIMCodeGenFriendsAlbumVideoInfoModel, NSString, AWEIMCodeGenFriendsAlbumPrivilegeInfoModel, AWEIMCodeGenFriendsAlbumPhotoInfoModel, AWEIMCodeGenFriendsAlbumSourceInfoModel;

@interface AWEIMCodeGenFriendsAlbumMediaInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *mediaId;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long creator;
@property (nonatomic) long long createTime;
@property (nonatomic) long long orderTime;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumPhotoInfoModel *photoModel;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumVideoInfoModel *videoModel;
@property (nonatomic) long long mediaSourceType;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumSourceInfoModel *mediaSourceInfoModel;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumPrivilegeInfoModel *privilegeInfoModel;
@property (nonatomic) int status;
@property (nonatomic) long long convShortId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
