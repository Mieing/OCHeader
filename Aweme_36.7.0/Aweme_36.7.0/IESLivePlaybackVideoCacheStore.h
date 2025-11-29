@class HTSLiveEpisode, NSArray, NSString, IESLivePlaybackVideoCacheResolution, HTSEventContext, NSMutableArray, IESLivePlaybackComponentContext;

@interface IESLivePlaybackVideoCacheStore : NSObject <IESVSVideoCacheServiceDelegate, HTSLiveNetworkStatusActions>

@property (nonatomic) unsigned long long listState;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSArray *resolutions;
@property (nonatomic) BOOL forceUpdateList;
@property (copy, nonatomic) NSString *mediaTitle;
@property (retain, nonatomic) IESLivePlaybackVideoCacheResolution *currentResolution;
@property (nonatomic) long long networkStatus;
@property (copy, nonatomic) NSMutableArray *waitingTasks;
@property (copy, nonatomic) NSMutableArray *downloadingTasks;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (nonatomic) BOOL showNetworkAlert;
@property (copy, nonatomic) NSString *toastString;
@property (retain, nonatomic) HTSLiveEpisode *episode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)changeToCellularNetwork;
- (void)changeToWifiNetwork;
- (void)changeToNetworkUnreachable;
- (void)pauseAllTasks;
- (id)getDownloadStatus:(unsigned long long)a0;
- (id)getVideoResolutionString:(long long)a0;
- (void)resumeAllTasks;
- (void)p_updateDownloadTask:(id)a0;
- (void)p_updateDownloadTask:(id)a0 withProgress:(float)a1 netSpeed:(float)a2;
- (void)videoCacheService:(id)a0 didStartWithDownloadTask:(id)a1;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 stateDidChange:(long long)a2;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 didCompleteWithError:(id)a2;
- (void)videoCacheService:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 timeInterval:(double)a3 currentProgress:(double)a4;
- (void)p_handleResponse:(id)a0;
- (id)initWithTrackContext:(id)a0 componentContext:(id)a1;
- (id)trackNameWithSuffix:(id)a0;
- (void)saveResolution:(unsigned long long)a0;
- (void)cancelDownloadModelWithEpisodeId:(id)a0;
- (void)startFetchEpisodeList;
- (void)cacheModelWillDisplay:(id)a0;
- (void)startDownloadModel:(id)a0;
- (void)pauseDownloadModel:(id)a0;
- (void)syncResolutionModel;
- (void)p_updateNetworkStatus;
- (void)p_updateResolutionWithResolution:(id)a0 forceUpdate:(BOOL)a1;
- (void)setPropertyResolution:(id)a0 model:(id)a1;
- (void)p_trackAllModelDownloadStatusShow;
- (void)p_kvStoreAddCurrentUserIdToUidList:(id)a0;
- (void).cxx_destruct;

@end
