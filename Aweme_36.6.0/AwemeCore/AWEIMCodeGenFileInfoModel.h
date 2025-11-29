@class NSString, AWEIMCodeGenFriendsAlbumSourceInfoModel, AWEIMCodeGenFriendsAlbumPrivilegeInfoModel;

@interface AWEIMCodeGenFileInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *fileId;
@property (nonatomic) long long creator;
@property (nonatomic) long long createTime;
@property (nonatomic) long long orderTime;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumSourceInfoModel *fileSourceInfoModel;
@property (retain, nonatomic) AWEIMCodeGenFriendsAlbumPrivilegeInfoModel *privilegeInfoModel;
@property (nonatomic) int status;
@property (nonatomic) long long convShortId;
@property (nonatomic) long long dataSize;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *uri;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
