@interface ACCCreationToolAlbumUtils : NSObject

+ (id)p_limitTipsStringWhenSelectAsset:(id)a0 selectedAssets:(id)a1 context:(id)a2;
+ (BOOL)isSingleSelectStraightOutWithContext:(id)a0;
+ (BOOL)canSelectAlbumAsset:(id)a0 selectedAssets:(id)a1 context:(id)a2;
+ (id)p_limitDurationTipsStringWhenSelectAsset:(id)a0 context:(id)a1;
+ (id)p_limitCountTipsStringWhenSelectAsset:(id)a0 selectedAssets:(id)a1 context:(id)a2;
+ (BOOL)showLimitTipsWhenSelectAsset:(id)a0 selectedAssets:(id)a1 context:(id)a2;
+ (BOOL)needDisplayGreyModeWithAsset:(id)a0 selectedAssets:(id)a1 context:(id)a2;

@end
