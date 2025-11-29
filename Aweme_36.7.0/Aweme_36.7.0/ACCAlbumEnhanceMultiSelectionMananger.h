@class NSString;

@interface ACCAlbumEnhanceMultiSelectionMananger : NSObject <AWEAlbumEnhanceMultiSelectionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createNavigationViewWithTopRightCornerType:(unsigned long long)a0 themeType:(long long)a1 shootWay:(id)a2;
+ (void)configInputDataForUploadType:(id)a0;
+ (id)createAlbumBottomViewForNewPreviewWithThemeType:(long long)a0;
+ (id)createSelectBtnForPreview;
+ (BOOL)isEnhanceMultisSelectionMode:(unsigned long long)a0;
+ (id)createAlbumBottomViewForPreviewWithThemeType:(long long)a0;
+ (id)createAlbumBottomViewWithThemeType:(long long)a0;
+ (void)customButtonStyle:(id)a0;
+ (id)createAlbumBottomViewForFriendsDaily;
+ (id)createAlbumBottomViewForPreviewForFriendsDaily;
+ (BOOL)p_shouldShowDraftBoxEntranceWithInputData:(id)a0;
+ (BOOL)useDarkMode:(long long)a0;


@end
