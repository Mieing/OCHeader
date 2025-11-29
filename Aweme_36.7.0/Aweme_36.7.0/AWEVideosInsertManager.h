@class NSString;

@interface AWEVideosInsertManager : NSObject <AWEVideosInsertManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldMarkFromPushForAwemeID:(id)a0;
+ (BOOL)hasLeadingVideosInsertForFeed:(long long)a0;
+ (void)addLeadingVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2;
+ (id)leadingVideosInsertQueryParamsForFeed:(long long)a0;
+ (id)leadingVideosInfoForFeed:(long long)a0;
+ (void)clearLeadingVideosInsertInfoForFeed:(long long)a0;
+ (void)addLeadingVideosInsertAwemeIDs:(id)a0 toFeed:(long long)a1;
+ (void)clearPushPreloadDataWithAwemeID:(id)a0;
+ (void)addCustomVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2;
+ (void)addCustomVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2 completion:(id /* block */)a3;
+ (id)leadingVideosInsertAwemeIDsForFeed:(long long)a0;
+ (void)addCustomVideosInsertAwemeIDs:(id)a0 toFeed:(long long)a1;
+ (void)addCustomVideosInsertImp:(id)a0 toFeed:(long long)a1;
+ (id)customVideoInsertInfoForFeed:(long long)a0;
+ (id)handleGroupSchema:(id)a0 isColdLaunch:(BOOL)a1;
+ (id)videosInsertResult;
+ (void)addPushVideoInFilterListWithItemIds:(id)a0;
+ (BOOL)insertVideosWhenColdLaunchWithLaunchURL:(id)a0;
+ (void)markFromPushWithOpenURL:(id)a0;
+ (BOOL)insertVideosWhenLaunchWithOpenURL:(id)a0 isColdLaunch:(BOOL)a1 fromPush:(BOOL)a2;
+ (BOOL)insertVideosWhenColdLaunchWithOpenURL:(id)a0 fromPush:(BOOL)a1;
+ (id)awemeIDFromUrlPath:(id)a0;
+ (void)addLeadingVideosInsertAwemeIDs:(id)a0 extraInfo:(id)a1 toFeed:(long long)a2 scheme:(id)a3;
+ (void)addCustomVideosWhenHotLaunchInsertAwemeIDs:(id)a0 toFeed:(long long)a1 trackInfo:(id)a2;
+ (long long)tabIndexFromUrlString:(id)a0;
+ (id)awemeIDsFromUrlPushParamsParam:(id)a0;
+ (id)gidsFromUrlGidsParam:(id)a0;
+ (id)gidsCardFromUrlGidsParam:(id)a0;
+ (id)last7DaysPushClickedVideoItems;
+ (void)addLeadingVideosInsertAwemeIDs:(id)a0 toFeed:(long long)a1 scheme:(id)a2;
+ (id)lifeCycleHashTable;
+ (void)filterPushClickedVideosInResponseModel:(id)a0;
+ (void)tryDisableFromPushMarksDueToAwemeID:(id)a0;
+ (void)enableFromPushMarks;
+ (void)registerVideoInsertLifeCycle:(id)a0;
+ (void)unregisterVideoInsertLifeCycle:(id)a0;
+ (id)pushPreloadDataWithAwemeID:(id)a0 needTrack:(BOOL)a1;
+ (void)trackPushPreloadInsertShow:(id)a0 scene:(id)a1 fromCache:(BOOL)a2;


@end
