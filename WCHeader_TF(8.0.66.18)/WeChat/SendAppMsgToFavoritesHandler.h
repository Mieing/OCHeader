@class UINavigationController, NSString, ShareFavoritesConfirmLogicHelper, NSData, OpenApiImageCdnUploader, OpenApiParameter, MMTipsViewController;

@interface SendAppMsgToFavoritesHandler : MMObject <WCShareAuthViewControllerDelegate, MMTipsViewControllerDelegate, ShareFavoritesConfirmLogicHelperDelegate> {
    OpenApiParameter *_parameter;
    ShareFavoritesConfirmLogicHelper *_shareHelper;
}

@property (retain, nonatomic) UINavigationController *m_navigationController;
@property (nonatomic) BOOL canReturnRightShareResult;
@property (retain, nonatomic) MMTipsViewController *tipsViewController;
@property (retain, nonatomic) NSData *hdSongAlbumData;
@property (retain, nonatomic) OpenApiImageCdnUploader *uploader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)sendAppMsgToFavorites:(id)a0;
- (void)cancelSendAppMsgToFavorites;
- (void)cancelAllHandle;
- (void)clearAllHandle;
- (void)cancelAllHandleAndReturn3rdApp;
- (void)clearAllHandleAndReturn3rdApp:(BOOL)a0;
- (void)launchAppAndSendRespWithErrCode:(int)a0;
- (void)removeConfirmView;
- (void)saveData:(id)a0 ToFile:(id)a1;
- (id)sendFavoritesTextWithComunicateData:(id)a0;
- (id)sendFavoritesPhotoWithComunicateData:(id)a0;
- (id)sendFavoritesMusicWithComunicateData:(id)a0;
- (id)sendFavoritesVideoWithComunicateData:(id)a0;
- (id)sendFavoritesFeedWithComunicateData:(id)a0;
- (id)sendFavoritesFileWithComunicateData:(id)a0;
- (void)sendFavoritesWithComunicateData:(id)a0;
- (BOOL)ShouldInterceptShareFavoritesItemBeforeConfirm:(id)a0;
- (void)OnShareFavoritesItemOK:(id)a0;
- (void)OnShareFavoritesItemFail:(id)a0 WithError:(int)a1;
- (void)OnShareFavoritesItemCancel:(id)a0;
- (void)removeFavSourcePathFileWithDataList:(id)a0;
- (void)doAppAuth;
- (void)shareAuthViewControllerDidCancel:(id)a0;
- (void)shareAuthViewControllerDidRedirect:(id)a0;
- (void)shareAuthViewControllerDidSuccess:(id)a0 redirectUrl:(id)a1 extraInfo:(id)a2;
- (void)shareAuthViewControllerDidFail:(id)a0;
- (void)showAlertView;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)reportShareResult:(int)a0;
- (void).cxx_destruct;

@end
