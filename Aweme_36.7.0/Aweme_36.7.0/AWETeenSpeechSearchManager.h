@class NSString, NSMutableSet;

@interface AWETeenSpeechSearchManager : NSObject <AWETeenUserMessage>

@property (nonatomic) long long speechSearchCount;
@property (nonatomic) double homeRecurrenceGuideShowTime;
@property (nonatomic) long long homePageGuidShowCount;
@property (retain, nonatomic) NSMutableSet *allVideoSets;
@property (nonatomic) BOOL isShowingHomePageGuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanced;

- (void)didFinishUpdateMinorAwemeUser;
- (BOOL)shouldShowHomePageGuid;
- (void)startShowHomePageSearchGuid;
- (void)endShowHomePageSearchGuid;
- (BOOL)hasDownloadLottie;
- (id)homePageGuidLottieJsonPath;
- (void)recordFeedVideoWithVideoID:(id)a0;
- (BOOL)shouldShowSearchGuid;
- (void)increaseHomePageSearchCount;
- (id)searchPageGuidLottiePath;
- (id)p_searchCountKey;
- (id)p_homeRecurrenceTimeKey;
- (id)p_lottieDicForData:(id)a0;
- (id)authPointPath;
- (id)speechPageRecordLottiePath;
- (id)speechPageRecordLottieJson;
- (void).cxx_destruct;
- (id)init;

@end
