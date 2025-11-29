@interface ACCImageAlbumItemHDRInfo : ACCImageAlbumItemVEResourceRestorableModel

@property (nonatomic) BOOL enableHDRNet;

- (id)lensHDRModelFilePath;
- (void)updateLensHDRModelWithFilePath:(id)a0;
- (BOOL)didInfosChangedWithTarget:(id)a0;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;

@end
