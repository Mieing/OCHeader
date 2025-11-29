@interface MJAssetPickerHelper : NSObject

+ (id)handlePickerAssetsUsableDetectionForProResWithAssetInfo:(id)a0 assetPickerState:(id)a1;
+ (id)handlePickerAssetsUsableDetectionForP3DisplayWithPicker:(id)a0 assetPickerState:(id)a1;
+ (void)handlePickerAssetsUsableDetectionForDidFinishAssetsPicking:(id)a0 completion:(id /* block */)a1;
+ (void)_showUsableToastWithAppleProResCodecAssetInfos:(id)a0 mmAssetInfos:(id)a1;
+ (void)_showUsableToastWithP3DisplayColorSpaceAssetInfos:(id)a0 mmAssetInfos:(id)a1 completion:(id /* block */)a2;

@end
