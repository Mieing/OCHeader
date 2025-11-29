@interface MMMusicMVModelLocalDataHelper : NSObject

+ (id)loadLocalPendingMVModels;
+ (id)loadLocalDraftMVModels;
+ (void)syncLocalPendingModels:(id)a0;
+ (void)syncLocalDraft:(id)a0;
+ (id)getPostMMKV;
+ (id)getDraftMMKV;
+ (id)genDataItemForPreviewingWithLocalPics:(id)a0;
+ (id)genPathToLocalCoverImage;
+ (id)pathToCompressedLocalVideo:(id)a0;
+ (id)saveCoverImageToLocal:(id)a0;
+ (id)copyCoverImageToLocalWithPath:(id)a0;
+ (void)deleteLocalTrimmedVideo:(id)a0;
+ (void)deleteAllLocalTrimmedVideo:(id)a0;
+ (id)compressedImageData:(id)a0;
+ (id)reuseFinderCompressImageDataLogic:(id)a0;
+ (id)mvImageResize:(id)a0 andResizeConstraint:(struct CGSize { double x0; double x1; })a1;
+ (id)pathToLocalCoverImageWithFilename:(id)a0;
+ (id)pathToTrimmedLocalVideo:(id)a0;
+ (id)videoPathWithLocalVideo:(id)a0 fileName:(id)a1;
+ (void)deleteLocalCoverImageWithFilename:(id)a0;
+ (void)trimAndSaveLocalVideo:(id)a0 completion:(id /* block */)a1;
+ (void)fillSelfPublishDefaultValue:(id)a0;
+ (void)setupInitialFieldsForLocalMVModel:(id)a0;
+ (id)genDataItemForPreviewingWithLocalVideo:(id)a0;

@end
