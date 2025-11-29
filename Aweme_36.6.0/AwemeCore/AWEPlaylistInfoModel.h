@class AWEPlaylistOwnerInfoModel, NSString, AWEMiniLunaURLInfo, AWEDailyPlaylistModel, AWEPlaylistStatusModel, AWEURLModel, _TtC21AWEMusicStreamingImpl14LunaTrackColor, AWEPlaylistPermission, AWEPlaylistVideoButtonModel;

@interface AWEPlaylistInfoModel : AWEBaseApiModel {
    NSString *_picUrl;
}

@property (copy, nonatomic) NSString *playlistId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *picUrl;
@property (retain, nonatomic) AWEURLModel *picUrlModel;
@property (retain, nonatomic) AWEMiniLunaURLInfo *coverURL;
@property (nonatomic) unsigned long long picSourceType;
@property (copy, nonatomic) NSString *picUri;
@property (nonatomic) long long musicCount;
@property (retain, nonatomic) AWEPlaylistOwnerInfoModel *ownerInfo;
@property (nonatomic) unsigned long long playlistType;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long privacyStatus;
@property (nonatomic) BOOL isCollected;
@property (nonatomic) BOOL isInvalid;
@property (copy, nonatomic) NSString *invalidReason;
@property (nonatomic) BOOL isTitleModified;
@property (nonatomic) long long collectedCount;
@property (retain, nonatomic) AWEPlaylistStatusModel *statusInfo;
@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) AWEPlaylistPermission *permission;
@property (nonatomic) BOOL canShowCreatePlaylistVideoEntry;
@property (nonatomic) long long userPlaylistTotalCount;
@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) AWEPlaylistVideoButtonModel *playlistVideoButton;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl14LunaTrackColor *baseColors;
@property (retain, nonatomic) AWEDailyPlaylistModel *dailyPlaylistInfo;
@property (copy, nonatomic) NSString *subTitle;

+ (id)statusInfoJSONTransformer;
+ (id)ownerInfoJSONTransformer;
+ (id)picUrlModelJSONTransFormer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getInvaildTipDes;
- (id)initWithMiniLunaModel:(id)a0;
- (BOOL)luna_isMiniLuna;
- (id)playlistDefaultCoverImageNameInLight:(BOOL)a0;
- (BOOL)music_canShowPublishButton;
- (id)getPublishInvalidToast;
- (BOOL)music_isMyPlaylist;
- (void).cxx_destruct;

@end
