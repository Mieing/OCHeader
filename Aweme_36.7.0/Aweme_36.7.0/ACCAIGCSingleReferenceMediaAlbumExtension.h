@class ACCAlbumInputData;

@interface ACCAIGCSingleReferenceMediaAlbumExtension : ACCAlbumExtension

@property (weak, nonatomic) ACCAlbumInputData *inputData;

- (void)albumDidClickSelectAssetsButtonWithSelectedAssetes:(id)a0 targetAsset:(id)a1 isSelected:(BOOL)a2;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void).cxx_destruct;

@end
