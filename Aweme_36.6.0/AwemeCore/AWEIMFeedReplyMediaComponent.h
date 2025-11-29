@class NSString;

@interface AWEIMFeedReplyMediaComponent : AWEIMFlexComponent <IESIMFriendsAlbumActionMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)updateAssetActionWithCid:(id)a0 assetId:(id)a1 assetModel:(id)a2 cacheModel:(id)a3;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)didTappedCover;
- (void)p_showCloseFriendsMomentDetail;
- (BOOL)p_shouldShowCollapseMediaControllerWithCell:(id)a0;
- (void)dealloc;

@end
