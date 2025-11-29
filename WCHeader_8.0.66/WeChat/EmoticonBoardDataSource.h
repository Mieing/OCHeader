@interface EmoticonBoardDataSource : NSObject

+ (id)getEmoticonBoardDataWithPackageArray:(id)a0 andCouldShowTip:(BOOL)a1;
+ (id)getIPMergedEmoticonBoardDataWithPackageArray:(id)a0;
+ (id)getIPTipEmoticonBoardDataWithPackageArray:(id)a0;
+ (id)getRecommandBoardDataWithRecommandItemArray:(id)a0;
+ (id)getTabRecommandItemsWithStickerPackages:(id)a0 recommandMaxCount:(long long)a1;
+ (id)tabItemFromPackWrap:(id)a0;
+ (id)tabItemFromRecommandItem:(id)a0;
+ (id)getStoreEmoticonPageWrapWithRecommandItem:(id)a0;
+ (id)getStoreEmoticonPageWrapWithPackWrap:(id)a0;
+ (id)getCustomEmoticonPageWrapWithShowCustomEntry:(BOOL)a0 AndshowGameEmoticon:(BOOL)a1;
+ (id)getCameraEmoticonPageWrapWithShowCameraEntry:(BOOL)a0;
+ (id)getIPEmoticonPageWrapWithIPSetKey:(id)a0;
+ (id)getIPEmoticonIPTipPageWrapWithPid:(id)a0;
+ (id)getEmoticonListWithPageWrap:(id)a0;
+ (id)getStoreEmoticonListWithPageWrap:(id)a0;
+ (id)getCustomOrCameraEmoticonListWithPageWrap:(id)a0;
+ (id)getEmoticonListWithPid:(id)a0 needCheckImageExist:(BOOL)a1;
+ (id)checkImageExistInEmoticonWrapArray:(id)a0 abortOnFailure:(BOOL)a1;
+ (id)getCustomEmoticonListWithNeedCheckImageExist:(BOOL)a0 andShowGameEmoticon:(BOOL)a1;
+ (id)getCameraEmoticonListWithNeedCheckImageExist:(BOOL)a0;

@end
