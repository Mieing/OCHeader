@interface ACCAssetCaptureParamsHelper : NSObject

+ (id)dateFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)captureLocationFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)cameraModelFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)apertureFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)isoFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)shutterSpeedFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)focalLengthFromMetadata:(id)a0 mediaType:(long long)a1;
+ (id)lensModelFromMetaData:(id)a0 mediaType:(long long)a1;
+ (id)userCommentFromMetaData:(id)a0 mediaType:(long long)a1;
+ (id)combineMake:(id)a0 model:(id)a1;
+ (void)getAssetCaptureParams:(id)a0 completion:(id /* block */)a1;
+ (void)getAssetCaptureParams:(id)a0 infoTypeArray:(id)a1 completion:(id /* block */)a2;
+ (void)getAssetCaptureLocation:(id)a0 completion:(id /* block */)a1;
+ (void)getAssetCaptureDate:(id)a0 completion:(id /* block */)a1;
+ (void)getAssetLensModel:(id)a0 completion:(id /* block */)a1;
+ (void)loadMetadataForAsset:(id)a0 completion:(id /* block */)a1;

@end
