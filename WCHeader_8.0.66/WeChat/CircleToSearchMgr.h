@class NSString;

@interface CircleToSearchMgr : MMUserService <MMMenuControllerExt, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMenuControllerDidShow;
- (BOOL)fillExistingImageInfoTo:(id)a0 forEntity:(id)a1;
- (void)asyncGenerateImageInfo:(id)a0 andCompletion:(id /* block */)a1;
- (id)genImageFilePath;
- (void)saveImageForUploading:(id)a0 andCompletion:(id /* block */)a1;
- (void)uploadImageWithFilePath:(id)a0 andCompletion:(id /* block */)a1;
- (void)uploadImageInC2CWithFilePath:(id)a0 andCompletion:(id /* block */)a1;
- (id)savePartialImage:(id)a0 withNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isImageSatisfactoryWithPath:(id)a0 andExisted:(BOOL *)a1;
- (id)getImageFromMessageWrap:(id)a0 withDefault:(id)a1;
- (id)getImageFromMediaItem:(id)a0 withDefault:(id)a1;
- (void)exposeWithScene:(unsigned long long)a0 andEntrance:(unsigned long long)a1;
- (void)exposeWithScene:(unsigned long long)a0 andEntrance:(unsigned long long)a1 andActionValue:(id)a2;
- (void)exposeWithSearchScene:(unsigned long long)a0 andEntrance:(unsigned long long)a1 andActionValue:(id)a2;
- (void)startCircleToSearchWithEntity:(id)a0 onViewController:(id)a1;
- (void)startCircleToSearchOnViewController:(id)a0 withImage:(id)a1 andScene:(unsigned long long)a2 andEntrance:(unsigned long long)a3 andEntityBlock:(id /* block */)a4;
- (void)startCircleToSearchWithImage:(id)a0 andScene:(unsigned long long)a1 andEntrance:(unsigned long long)a2 andEntityBlock:(id /* block */)a3;
- (BOOL)isEnabledForScene:(unsigned long long)a0 andEntrance:(unsigned long long)a1;
- (id)businessNameForScene:(unsigned long long)a0 andEntrance:(unsigned long long)a1;
- (id)iconWithSize:(struct CGSize { double x0; double x1; })a0 andColorful:(BOOL)a1 forScene:(unsigned long long)a2 andEntrance:(unsigned long long)a3;
- (int)preferredImageSize;
- (float)preferredImageRatioLimit;
- (float)preferredImageCompressionQuality;
- (int)transferTimeoutSeconds;
- (BOOL)shouldUploadInC2C;
- (BOOL)shouldReuseExistingImageInfo;
- (id)supportedReusedImageDomainList;

@end
