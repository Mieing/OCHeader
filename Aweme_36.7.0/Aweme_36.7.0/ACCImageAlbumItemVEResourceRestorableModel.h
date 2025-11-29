@class NSString;

@interface ACCImageAlbumItemVEResourceRestorableModel : ACCImageAlbumItemBaseResourceModel

@property (copy, nonatomic) NSString *effectIdentifier;

- (id)getAbsoluteFilePath;
- (void)setAbsoluteFilePath:(id)a0;
- (void)updateRecoveredEffectIfNeedWithIdentifier:(id)a0 filePath:(id)a1;
- (void).cxx_destruct;

@end
