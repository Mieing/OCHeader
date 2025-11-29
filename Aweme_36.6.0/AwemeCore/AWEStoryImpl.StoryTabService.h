@class AFDFrequencyCountRule;

@interface AWEStoryImpl.StoryTabService : HTSService <AWEStoryTabService> {
    void /* unknown type, empty encoding */ storyFeedEnterFrom;
}

@property (nonatomic, readonly) AFDFrequencyCountRule *momentMigrationFrequencyRule;

- (id)tabContainerViewControllerWithUserModel:(id)a0;
- (id)story25TabWithUser:(id)a0 isCurrentUser:(BOOL)a1 isFromUserHomePage:(BOOL)a2 delegate:(id)a3 enterFrom:(id)a4;
- (void)updateStoryFeedEnterFrom:(id)a0;
- (id)queryStoryFeedEnterFrom;
- (id)storyFeedTrackingParamsWithAwemeModel:(id)a0;
- (BOOL)shouldRemoveCameraComponentWithDetailType:(unsigned long long)a0;
- (void)openStoryHistoryViewControllerWithUserModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
