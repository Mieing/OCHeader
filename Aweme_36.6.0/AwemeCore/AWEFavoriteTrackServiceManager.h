@class NSString;

@interface AWEFavoriteTrackServiceManager : NSObject <AWEFavoriteTrackServiceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)favoriteTypeToTrackName:(unsigned long long)a0;
- (void)trackFolderDetailItemShow:(id)a0 session:(long long)a1 itemIndex:(long long)a2;
- (void)trackFavoriteSnackBarShowDurationWithHasCache:(BOOL)a0 durationTime:(double)a1;
- (void)trackFavoriteSecondTabShow:(unsigned long long)a0 enterFrom:(id)a1 isRedDotShow:(BOOL)a2 extraParams:(id)a3;
- (void)trackFavoriteSecondTabShow:(unsigned long long)a0 enterFrom:(id)a1 isRedDotShow:(BOOL)a2;
- (void)trackFolderItemShowWithContext:(id)a0;
- (void)trackFolderItemClickWithContext:(id)a0;
- (void)trackFavoriteSnackBarAndAddToFilePopupShow:(id)a0 authorId:(id)a1 groupId:(id)a2 folderCnt:(long long)a3 toastType:(id)a4;
- (void)trackFavoriteSnackBarAndAddToFilePopupClick:(id)a0 authorId:(id)a1 groupId:(id)a2 clickPosition:(id)a3;
- (void)trackCreateNewFavoriteFolderClick:(id)a0;
- (void)trackAwemeColumnStyleChange:(id)a0 toStatus:(id)a1;

@end
