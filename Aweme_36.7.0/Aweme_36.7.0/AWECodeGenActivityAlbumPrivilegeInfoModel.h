@interface AWECodeGenActivityAlbumPrivilegeInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL canDelete;
@property (nonatomic) BOOL canUpload;
@property (nonatomic) BOOL canDownload;
@property (nonatomic) BOOL canSetTop;

+ (id)JSONKeyPathsByPropertyKey;

@end
