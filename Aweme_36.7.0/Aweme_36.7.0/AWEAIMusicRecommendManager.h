@class AWEAIMusicRecommendTask, NSArray, NSString;
@protocol ACCEditServiceProtocol;

@interface AWEAIMusicRecommendManager : NSObject

@property (retain, nonatomic) AWEAIMusicRecommendTask *currentTask;
@property (copy, nonatomic) NSArray *recommedMusicList;
@property (nonatomic) BOOL usedAIRecommendDefaultMusicList;
@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) unsigned long long musicFetchType;
@property (readonly, nonatomic) long long maxNumForUpload;
@property (readonly, nonatomic) long long frameSizeForUpload;
@property (readonly, nonatomic) unsigned long long recordFrameType;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;

+ (BOOL)isCachedDefaultRecommendMusicListExpired;
+ (void)updateCachedDefaultRecommendMusicLisSaveTime;
+ (id)sharedInstance;

- (void)p_fetchAIRecommendDefaultData;
- (void)fetchDefaultMusicListFromTOSWithURLGoup:(id)a0 callback:(id /* block */)a1;
- (void)fetchAIRecommendMusicWithURI:(id)a0 bachResult:(id)a1 callback:(id /* block */)a2;
- (void)fetchAIRecommendMusicWithURI:(id)a0 bachResult:(id)a1 otherParam:(id)a2 laodMoreCallback:(id /* block */)a3;
- (BOOL)aiRecommendMusicEnabledForModel:(id)a0;
- (void)deleteMusicModelIfNeeded:(id)a0;
- (void)cleanRecommedMusicList;
- (void)jarvisTrackWithEvent:(id)a0 params:(id)a1 publishModel:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
