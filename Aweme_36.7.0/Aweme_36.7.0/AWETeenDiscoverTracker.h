@interface AWETeenDiscoverTracker : NSObject

+ (void)trackAlbumIndexShowWithModel:(id)a0 rank:(long long)a1 indexCount:(long long)a2 showType:(id)a3 extra:(id)a4;
+ (void)trackAlbumIndexDetailShowWithEnterMethod:(id)a0 hasCover:(BOOL)a1 hasIntroduction:(BOOL)a2 extra:(id)a3;
+ (void)trackAlbumIndexDetailScrollWithExtra:(id)a0;
+ (void)trackGuideCardWithModel:(id)a0 rank:(long long)a1 trackEvent:(id)a2 extra:(id)a3;
+ (void)trackExploreChannelShowWithEnterMethod:(id)a0 rank:(long long)a1 channelID:(id)a2 channelTitle:(id)a3;
+ (void)trackGuideCardShowWithModel:(id)a0 rank:(long long)a1 extra:(id)a2;
+ (void)trackGuideCardClickWithModel:(id)a0 rank:(long long)a1 extra:(id)a2;

@end
