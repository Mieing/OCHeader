@class AWEPlaylistOfflineInfo, NSMutableArray, NSMutableDictionary;

@interface AWEPlaylistOfflineInfoManager : NSObject

@property (retain, nonatomic) NSMutableArray *onlinePlaylistID;
@property (retain, nonatomic) NSMutableDictionary *dataSourceDic;
@property (retain, nonatomic) AWEPlaylistOfflineInfo *currentOfflinePlaylistInfo;

+ (id)sharedInstance;

- (id)getKeyWithWithGroupID:(id)a0 anchorPlaylistID:(id)a1;
- (id)p_makeTempPlaylistInfo;
- (id)p_defaultPlaylistTitle;
- (id)p_defaultOwnerInfo;
- (id)p_defaultPlaylistPermission;
- (BOOL)isSongHasSelectedInOfflineSource:(id)a0;
- (id)getCurrentPlaylistOfflineInfoWithGroupID:(id)a0 anchorPlaylistID:(id)a1;
- (void)resetOnlinePlaylistInfo;
- (void)deleteOnlinePlaylist;
- (void)addOnlinePlaylistWithID:(id)a0;
- (void)resetCurrentPlaylistInfo;
- (void).cxx_destruct;
- (id)init;

@end
