@class SnsAlbumFeedBehaviour, SnsUserBehaviourInfo;

@interface WCTimelinePhotoAlbumUserActionReporter : NSObject

@property (retain, nonatomic) SnsUserBehaviourInfo *userBehaviourInfoSession;
@property (retain, nonatomic) SnsAlbumFeedBehaviour *albumFeedBehaviourSession;

+ (id)sharedInstanceWithUsername:(id)a0 homepageType:(long long)a1;
+ (id)reporterKeyWithUsername:(id)a0 homepageType:(long long)a1;
+ (void)beginBehaviourInfoSessionWithUsername:(id)a0 homepageType:(long long)a1;
+ (id)albumSessionIDWithUsername:(id)a0 homepageType:(long long)a1;
+ (long long)browseSceneTypeWithHomepageType:(long long)a0;
+ (long long)homepageTypeWithBrowseSceneType:(long long)a0;
+ (void)endBehaviourInfoSessionWithUsername:(id)a0 homepageType:(long long)a1;
+ (id)getBehaviourInfoSessionWithUsername:(id)a0 homepageType:(long long)a1;
+ (void)beginAlbumFeedBehaviourSessionWithUsername:(id)a0 homepageType:(long long)a1 dataItem:(id)a2 isDetailSession:(BOOL)a3;
+ (void)endAlbumFeedBehaviourSessionWithUsername:(id)a0 homepageType:(long long)a1;
+ (id)getAlbumFeedBehaviourSessionWithUsername:(id)a0 homepageType:(long long)a1;

- (void).cxx_destruct;

@end
