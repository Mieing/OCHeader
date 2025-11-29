@interface AWEPublishVideoSyncItemTool : NSObject

+ (Class)aAWEDSStudioAdapterClass;
+ (long long)isDxXiguaSyncStep2;
+ (void)updateFinalVideoSyncV2Model:(id)a0 toPublishModel:(id)a1;
+ (BOOL)isPrivacyVideoSyncCell:(id)a0;
+ (id)videoSyncModelFromPublishViewModel:(id)a0;
+ (BOOL)isEnableNewVideoSync:(id)a0;
+ (BOOL)shouldShowXiguaAutoSync:(id)a0;
+ (BOOL)shouldShowXiguaSync:(id)a0;
+ (BOOL)shouldShowUlikeSync:(id)a0;
+ (BOOL)enableSyncEntranceOptWithPublishModel:(id)a0;
+ (BOOL)isVideoPublishCanShowVideoSync:(id)a0;
+ (long long)minFansCountAtPublishPage;
+ (BOOL)hasEverAppSyncSelected:(id)a0;
+ (void)dealWithCreateAwemeParams:(id)a0 model:(id)a1;
+ (id)localRepoVideoSyncModelFromCache;
+ (BOOL)isPublishModelAvailableForSync:(id)a0;

- (id)aAWEDSStudioAdapter;

@end
