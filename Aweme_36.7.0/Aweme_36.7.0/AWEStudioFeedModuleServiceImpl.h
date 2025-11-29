@class NSString;

@interface AWEStudioFeedModuleServiceImpl : NSObject <AWEStudioFeedModuleServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestAwemeItemWithID:(id)a0 completion:(id /* block */)a1;
- (void)showPublishSuccessToastWithTask:(id)a0;
- (void)showSaveDraftSuccessToastWithTask:(id)a0;
- (void)showSaveToAlbumToastWithTask:(id)a0;
- (void)showReplaceMusicSuccessPushViewWithTask:(id)a0;
- (BOOL)isShowingStickerIcon;
- (void)preloadUserAvatar;
- (id)aweAwemeDetailTableViewControllerWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 enterFrom:(id)a3 logExtraDict:(id)a4 detailBottomInfoDict:(id)a5 shouldHideMusicInfoView:(BOOL)a6;

@end
