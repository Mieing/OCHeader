@class NSString, NSMutableDictionary;

@interface AWEProfileFollowGuideManager : NSObject <AWEFollowGuideManagerProtocol>

@property (nonatomic) long long leastWatchedTime;
@property (retain, nonatomic) NSMutableDictionary *followGuideDict;
@property (retain, nonatomic) NSMutableDictionary *followGuideStoragedInfo;
@property (retain, nonatomic) NSMutableDictionary *followGuideCreatorStoragedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createSessionKey;
- (BOOL)updateWatchedTime:(id)a0 duration:(double)a1 model:(id)a2;
- (void)updateShownCount:(id)a0 count:(long long)a1 model:(id)a2 index:(long long)a3;
- (BOOL)shouldShowFollowGuideButton:(id)a0 model:(id)a1;
- (BOOL)hasShowedFollowGuideButtonInHistory:(id)a0 model:(id)a1;
- (void)recordClickedUninterestBtnInHistory:(id)a0;
- (BOOL)hasDismissTimeInOptimization:(id)a0;
- (BOOL)updateDismissTime:(id)a0 interval:(double)a1 model:(id)a2;
- (void)cleanCreatorStorageInfo;
- (id)followGuideInfo:(id)a0;
- (BOOL)__canShowFollowButtonInOptimization:(id)a0;
- (void)increaseFollowGuideStorageCount;
- (void)updateCreatorStorageInfo:(id)a0;
- (void)__showFollowGuideButton:(id)a0;
- (BOOL)hasClickedUninterestBtnInHistory:(id)a0;
- (id)uninterestBtnHasClickedSavedKeyWithSession:(id)a0;
- (void)resetFollowGuideStorageInfo;
- (id)createEmptyFollowGuideStorageInfo;
- (id)createFollowGuideInfo:(id)a0 creatorId:(id)a1;
- (BOOL)canShowFollowGuideButton:(id)a0;
- (void)resetWatchedTimeIfNeed:(id)a0;
- (void)removeFollowGuideBySession:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
