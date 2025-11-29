@class NSNumber, AWEStudioBottomPreviewImportAssetAlbumConfig;

@interface AWEStudioEditBottomPreviewFeatureConfig : AWEStudioComposerBaseFeatureConfig

@property (copy, nonatomic) NSNumber *previewDefaultHidden;
@property (nonatomic) double previewHeight;
@property (nonatomic) double previewMaxWidth;
@property (nonatomic) double previewBottomOffset;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double highlightedScale;
@property (retain, nonatomic) AWEStudioBottomPreviewImportAssetAlbumConfig *albumConfig;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
