@class AWEOfflineMixVideoCacheInfoModel;

@interface AWEOfflineVideoSingleResourceModel : AWEOfflineVideoResourceModel

@property (nonatomic) double startDownloadTime;
@property (retain, nonatomic) AWEOfflineMixVideoCacheInfoModel *mixInfo;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadSpeedKB;
@property (nonatomic) BOOL hasWatched;

+ (BOOL)videoHasCachesWithFileHash:(id)a0;
+ (BOOL)audioHasCachesWithFileHash:(id)a0;

- (id)awemeModel;
- (id)initWithAwemeModel:(id)a0;
- (void)deleteFile;
- (void)deleteInvalidVideo;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)statusString;
- (void)setCacheSize:(double)a0;
- (BOOL)isEqual:(id)a0;

@end
