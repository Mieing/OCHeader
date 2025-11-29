@interface AWEMemoriesRecallConfig : NSObject

+ (double)mainStickerOffsetY;
+ (double)mainStickerFontSize;
+ (double)subStickerOffsetY;
+ (double)subStickerFontSize;
+ (int)stickerDuration;
+ (id)themeVideoConfig;
+ (BOOL)memoriesRecallEnable;
+ (id)privateTabTitle;
+ (BOOL)privateTabAlwaysShowEntrance;
+ (id)memoriesRecallAgreementLink;
+ (BOOL)playerThumbnailBorderVisible;
+ (BOOL)playerThumbnailLargerStyle;
+ (int)maxDisplayableThemeAssetsCount;
+ (int)themePlayCountExitThreshold;
+ (BOOL)AdvanceEditorEnable;
+ (long long)localAssetMaxCount;
+ (int)videoMinSlotCount;
+ (float)themeVideoSimilarityFilterThreshold;
+ (int)maxScanResultUploadCount;
+ (int)assetUploadChunkSize;
+ (double)imageAssetScaleEnd;
+ (int)videoAssetFilterConditionMinDuration;
+ (int)videoAssetFilterConditionMaxDuration;
+ (BOOL)enableHideFlashBackListViewLocalPermission;
+ (int)fragmentDuration;

@end
