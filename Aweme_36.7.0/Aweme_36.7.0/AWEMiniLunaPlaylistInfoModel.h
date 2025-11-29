@class NSString, AWEMiniLunaMyPlaylistState, AWEMiniLunaDailyPlaylistModel, AWEMiniLunaPlaylistVideoButtonModel, AWEMiniLunaPlaylistStats, _TtC21AWEMusicStreamingImpl11LunaURLInfo, _TtC21AWEMusicStreamingImpl14LunaTrackColor, _TtC21AWEMusicStreamingImpl13LunaUserBrief, _TtC21AWEMusicStreamingImpl19LunaUserArtistBrief;

@interface AWEMiniLunaPlaylistInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *idStr;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverURL;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long countTracks;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl13LunaUserBrief *ownerInfo;
@property (retain, nonatomic) AWEMiniLunaMyPlaylistState *state;
@property (retain, nonatomic) AWEMiniLunaPlaylistStats *stats;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) unsigned long long reviewStatus;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL fromFeed;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl19LunaUserArtistBrief *userArtistInfo;
@property (retain, nonatomic) AWEMiniLunaPlaylistVideoButtonModel *playlistVideoButton;
@property (copy, nonatomic) NSString *lunaColorGradientInfo;
@property (retain, nonatomic) AWEMiniLunaDailyPlaylistModel *dailyPlaylistInfo;
@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl14LunaTrackColor *baseColors;

+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)userArtistInfoJSONTransformer;
+ (id)reviewStatusJSONTransformer;
+ (id)ownerInfoJSONTransformer;
+ (id)resourceCountJSONTransformer;
+ (id)playlistVideoButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
