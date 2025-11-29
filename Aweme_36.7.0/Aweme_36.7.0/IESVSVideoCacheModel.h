@class TTVideoEngineDownloadVidTask, NSString, IESVSVideoCacheCellModel, HTSLiveAlbumItem, HTSLiveEpisode, IESVSVideoCacheSaveModel, TTVideoEngineModel;

@interface IESVSVideoCacheModel : IESLiveDynamicModel

@property (retain, nonatomic) IESVSVideoCacheSaveModel *saveModel;
@property (retain, nonatomic) HTSLiveAlbumItem *albumItem;
@property (readonly, copy, nonatomic) NSString *episodeID;
@property (readonly, copy, nonatomic) NSString *videoID;
@property (readonly, copy, nonatomic) NSString *seasonId;
@property (copy, nonatomic) NSString *mediaTitle;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) TTVideoEngineModel *videoModel;
@property (readonly, copy, nonatomic) NSString *dataToSaveKey;
@property (readonly, copy, nonatomic) NSString *dataToSave;
@property (readonly, copy, nonatomic) NSString *videoIdMapperKey;
@property (readonly, copy, nonatomic) NSString *videoIdMapperData;
@property (readonly, copy, nonatomic) NSString *videoIdForUidCheckMapperKey;
@property (retain, nonatomic) IESVSVideoCacheCellModel *cellModel;
@property (retain, nonatomic) TTVideoEngineDownloadVidTask *task;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (nonatomic) float netSpeed;
@property (nonatomic) unsigned long long resolutionType;
@property (nonatomic) BOOL isPlaying;

+ (id)formatSizeWithBytes:(long long)a0;
+ (id)formatNetworkTitleWithBytes:(long long)a0;

- (void)updateTitleWithIcon:(id)a0;
- (id)initWithAlbumItem:(id)a0;
- (void)p_configureCellModel;
- (void)updateTitleWithIcon:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)containsVideoResolution:(long long)a0;
- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (id)initWithEpisode:(id)a0;

@end
