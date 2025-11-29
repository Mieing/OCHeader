@class NSError, NSString, TTVideoEnginePreloaderVidItem, TTVideoEnginePreloaderVideoModelItem, NSMutableArray, TTVideoEngineModel, TTVideoEnginePreloaderURLItem, TTVideoEngineInfoFetcher;
@protocol _TTVideoEnginePreloadTaskDelegate;

@interface _TTVideoEnginePreloadTask : NSObject <TTVideoInfoFetcherDelegate>

@property (weak, nonatomic) id<_TTVideoEnginePreloadTaskDelegate> delegate;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *originFileKey;
@property (nonatomic) unsigned long long targetResolution;
@property (nonatomic) long long preloadMilliSecond;
@property (nonatomic) long long preloadMilliSecondOffset;
@property (nonatomic) long long preloadOffset;
@property (nonatomic) long long preSize;
@property (retain, nonatomic) TTVideoEngineInfoFetcher *fetcher;
@property (retain, nonatomic) TTVideoEngineModel *responseData;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) TTVideoEnginePreloaderURLItem *urlItem;
@property (retain, nonatomic) TTVideoEnginePreloaderVidItem *vidItem;
@property (retain, nonatomic) TTVideoEnginePreloaderVideoModelItem *videoModelItem;
@property (nonatomic) long long priorityLevel;
@property (nonatomic) BOOL onceNotify;
@property (nonatomic) long long dashVideoPreloadSize;
@property (nonatomic) long long dashAudioPreloadSize;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) long long preloadTimestamp;
@property (nonatomic) long long preloadDurationMilliSecond;
@property (retain, nonatomic) NSMutableArray *tracks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloadTask:(id)a0 videoId:(id)a1 preloadOffset:(long long)a2 preSize:(long long)a3 vidItem:(id)a4;
+ (id)preloadTask:(id)a0 videoId:(id)a1 preSize:(long long)a2 vidItem:(id)a3 videoModeltem:(id)a4;
+ (id)preloadTask:(id)a0 videoId:(id)a1 preSize:(long long)a2 vidItem:(id)a3;

- (void)infoFetcherDidFinish:(long long)a0;
- (void)infoFetcherDidFinish:(id)a0 error:(id)a1;
- (void)infoFetcherShouldRetry:(id)a0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)a0;
- (id)getTrackItem:(id)a0;
- (id)addTrackItemByKey:(id)a0;
- (void)removeVidPlaceholderTrack;
- (BOOL)preloadCahceComplete;
- (void)notifyPreloadProgress:(id)a0;
- (void)notifyPreloadEnd:(id)a0 error:(id)a1;
- (void)notifyPreloadStart:(id)a0;
- (BOOL)isActiveOfflineTask;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
