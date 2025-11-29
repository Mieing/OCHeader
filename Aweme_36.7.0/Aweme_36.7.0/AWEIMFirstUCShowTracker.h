@class NSString, HMDThreadSafeDictionary;

@interface AWEIMFirstUCShowTracker : NSObject <IESIMFirstUCShowTrackerProtocol, AWEUserMessage>

@property BOOL hasTrackedBefore;
@property (retain, nonatomic) HMDThreadSafeDictionary *trackInfo;
@property (nonatomic) BOOL isFilterReport;
@property (copy) NSString *currentUserID;
@property (retain, nonatomic) HMDThreadSafeDictionary *cacheUCCountDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackInfoNames;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)configCacheUCWithDict:(id)a0;
- (BOOL)isEnableToTrack;
- (void)reportUCTrackInfo;
- (BOOL)checkTrackInfoValid;
- (void)configUCTrackInfoWithName:(id)a0 data:(id)a1;
- (void)configUCTrackInfoWithName:(id)a0 timeStamp:(double)a1;
- (void)configUCTrackInfoWithDict:(id)a0;
- (id)firstShowUnreadCountStorageKey;
- (void).cxx_destruct;
- (id)init;

@end
