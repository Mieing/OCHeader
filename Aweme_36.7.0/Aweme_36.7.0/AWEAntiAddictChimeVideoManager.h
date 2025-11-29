@class NSString, AWEAwemeModel, NSDate, NSMutableArray, NSNumber;

@interface AWEAntiAddictChimeVideoManager : NSObject <AWEUserMessage>

@property (retain) AWEAwemeModel *chimeVideo;
@property (retain) NSDate *chimeVideoCacheTime;
@property (retain, nonatomic) NSMutableArray *failFetchPlayTimeArray;
@property (retain, nonatomic) NSDate *lastFailFetchTime;
@property (copy, nonatomic) NSString *chimeInfo;
@property (retain, nonatomic) NSNumber *chimeTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)needChimeTime;
- (void)cacheChimeInfo:(id)a0;
- (void)clearChimeVideoManagerVideoData;
- (void)loadChimeVideoDataFromCache;
- (void)loadRecordCodeDataFromCache;
- (id)antiAddictOnTimeVideoModelKey;
- (id)antiAddictChimeInfoKey;
- (void)clearExpiredFailFetchRecord;
- (BOOL)isChimeVideoValid;
- (void)clearChimeVideoCache;
- (BOOL)p_shouldPrefetchWithCurrentTime:(id)a0 playTimeToken:(long long)a1 beginTimeMinute:(long long)a2 endTimeMinute:(long long)a3;
- (void)cacheChimeVideo:(id)a0;
- (void)updatePreFetchResultCodeWithModel:(id)a0;
- (id)feedAntiRequestParams;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
