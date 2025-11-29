@class NSString, NSNumber;

@interface APCDTOAlbumComposerExtension : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (nonatomic) BOOL unifyForceEnabled;
@property (copy, nonatomic) NSString *albumEntryName;
@property (copy, nonatomic) NSString *editPageEntryName;
@property (retain, nonatomic) NSString *picTemplateInsertId;
@property (nonatomic) BOOL isPicTemplateSync;
@property (copy, nonatomic) NSNumber *forceEnterAlbumIgnorePermission;
@property (copy, nonatomic) NSNumber *enablePullableFullScreenContainer;
@property (nonatomic) BOOL disableLivePhotoImport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
