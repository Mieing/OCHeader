@class AWEAssetModel, NSString, NSURL, AWECodeGenActivityAlbumPrivilegeInfoModel, AWECodeGenActivityAlbumVideoInfoModel, PHLivePhoto, AWECodeGenActivityAlbumPhotoInfoModel, AWECodeGenActivityAlbumMediaTagModel, AWECodeGenActivityAlbumCreatorInfoModel;

@interface AWECodeGenActivityAlbumMediaInfoModel : AWEBaseDataModel

@property (nonatomic, retain) AWEAssetModel *assetModel;
@property (nonatomic, retain) PHLivePhoto *phLivePhoto;
@property (nonatomic, copy) NSURL *localImageURL;
@property (nonatomic, copy) NSURL *localVideoURL;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *creatorUserId;
@property (nonatomic) long long createTimeUnix;
@property (retain, nonatomic) AWECodeGenActivityAlbumCreatorInfoModel *creatorModel;
@property (retain, nonatomic) AWECodeGenActivityAlbumPrivilegeInfoModel *privilegeInfoModel;
@property (nonatomic) long long status;
@property (retain, nonatomic) AWECodeGenActivityAlbumPhotoInfoModel *photoModel;
@property (retain, nonatomic) AWECodeGenActivityAlbumMediaTagModel *tagModel;
@property (retain, nonatomic) AWECodeGenActivityAlbumVideoInfoModel *videoModel;
@property (retain, nonatomic) AWECodeGenActivityAlbumMediaTagModel *leftTagModel;
@property (nonatomic) BOOL isTop;

+ (id)propertyToOptionsMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
