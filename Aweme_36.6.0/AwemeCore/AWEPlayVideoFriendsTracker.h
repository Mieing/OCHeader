@interface AWEPlayVideoFriendsTracker : AWEPlayVideoBaseTracker

@property (nonatomic) BOOL isColdLaunchFamiliarFirstPlay;

- (id)paramsForVideoPlayInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayTimeInPlayer:(id)a0 paramsModel:(id)a1;
- (id)paramsForVideoPlayFinishInPlayer:(id)a0 paramsModel:(id)a1;
- (id)init;

@end
