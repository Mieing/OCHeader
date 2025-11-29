@interface AWELiveStreamFeedLabelManager : NSObject

+ (id)sharedInstance;

- (id)isContainCurrentUserWithModel:(id)a0;
- (void)addLiveRoomFeedLabelWithAwemeModel:(id)a0;
- (void)removeLiveRoomFeedLabelWithAwemeModel:(id)a0;
- (BOOL)hasRecoomendToFriends:(id)a0;
- (void)addLiveRecommendLabel:(id)a0 toAwemeModel:(id)a1;
- (void)removeLiveRecommendFromAwemeModel:(id)a0;

@end
