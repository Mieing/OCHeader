@class NSString;

@interface AWEPostWorkUnreadCacheController : AWEPostWorkBaseController <AWEProfileAwemeUnreadCacheMessage, AWEConcernFollowListUnreadCacheMessage, AWEPostWorkUnreadCacheProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)enterFrom;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (BOOL)needHandleFollowingUserUnread;
- (void)didDeleteProfileAwemeUnreadCacheItemsWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (BOOL)forceShowUnread;
- (void)updatePostWorkToReadWithWithUserID:(id)a0 readItems:(id)a1;
- (BOOL)needHandleIronRecommendUserUnread;
- (BOOL)needHandleFreqVisitedUserUnread;
- (BOOL)needUploadItemsNotExist;
- (id)userID;
- (void)dealloc;
- (void)containerViewDidLoad;

@end
