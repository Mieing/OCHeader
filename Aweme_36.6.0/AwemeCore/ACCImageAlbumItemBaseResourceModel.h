@class NSString;

@interface ACCImageAlbumItemBaseResourceModel : ACCImageAlbumItemBaseItemModel

@property (readonly, copy, nonatomic) NSString *filePath;

+ (id)draftFolderPathWithTaskId:(id)a0;
+ (id)documentPath;

- (id)getAbsoluteFilePath;
- (void)setAbsoluteFilePath:(id)a0;
- (id)p_getProcessedFilePath;
- (void)p_setProcessedFilePath:(id)a0;
- (void).cxx_destruct;

@end
