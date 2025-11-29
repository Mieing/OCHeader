@class NSString;
@protocol AWEStorageServiceKVInterface, AWEStorageServiceFileInterface;

@interface AWEFeedStorage : NSObject <AFDFeedStorage>

@property (class, readonly, nonatomic) id<AWEStorageServiceKVInterface> feedKVHandler;
@property (class, readonly, nonatomic) id<AWEStorageServiceKVInterface> feedCountKVHandler;
@property (class, readonly, nonatomic) id<AWEStorageServiceKVInterface> feedPreCacheKVHandler;
@property (class, readonly, nonatomic) id<AWEStorageServiceKVInterface> feedMMKVHandler;
@property (class, readonly, nonatomic) id<AWEStorageServiceFileInterface> fileStorageHandler;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)feed_userFlagKeyForUserID:(id)a0;
- (long long)feed_userFlag;
- (long long)totalVideoGuideShowedCount;
- (id)todayFirstRecordDate;
- (void)setTodayFirstRecordDate;
- (long long)todayVideoGuideShowedCount;
- (id)todayFirstShowLiveGuideDate;
- (void)setTodayFirstShowLiveGuideDate;
- (long long)todayLiveGuideShowedCount;
- (long long)totalLiveGuideIgnoredCount;
- (BOOL)feed_isUserFlagOn:(long long)a0;
- (void)feed_setUserFlag:(long long)a0;
- (void)feed_clearUserFlag:(long long)a0;
- (void)addVideoGuideShowedCount;
- (void)addTodayVideoGuideShowedCount;
- (void)addTodayLiveGuideShowedCount;
- (void)addLiveGuideIgnoreCount;
- (void)resetLiveGuideIgnoreCount;
- (id)firstIgnoreDate;
- (void)setLiveGuideFirstIgnoreDate;

@end
