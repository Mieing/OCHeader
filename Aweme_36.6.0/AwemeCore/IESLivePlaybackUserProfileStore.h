@class HTSLiveUserPreviewConfig, NSString, NSArray, HTSEventContext, HTSLiveShowChatMessage, HTSLiveRoomAuthStatus, HTSLiveUser, IESLivePlaybackComponentContext, NSNumber, HTSLiveEpisode;

@interface IESLivePlaybackUserProfileStore : NSObject

@property (copy, nonatomic) NSArray *avatarThumbURLs;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *playCount;
@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL isVerticalStream;
@property (readonly, nonatomic) HTSLiveEpisode *episode;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) HTSLiveUserPreviewConfig *config;
@property (retain, nonatomic) HTSLiveRoomAuthStatus *roomAuth;
@property (readonly, copy, nonatomic) NSString *playCountFormattedString;
@property (nonatomic) BOOL wasFollow;
@property (retain, nonatomic) HTSLiveShowChatMessage *chatMsg;
@property (readonly, nonatomic) BOOL dataDidUpdate;
@property (retain, nonatomic) HTSLiveUser *user;
@property (copy, nonatomic) id /* block */ playBackStatusChangeFollow;

- (void)followUser:(id)a0 completion:(id /* block */)a1;
- (void)followUserWithCompletion:(id /* block */)a0;
- (void)trackWithEventName:(id)a0;
- (void)followStatusDidChange:(BOOL)a0;
- (void)trackEnterProfile:(BOOL)a0;
- (id)reportConfigModel;
- (id)requestPageString;
- (void)updatePlayCount:(id)a0;
- (id)track_position;
- (void)trackRelationWithEvent:(id)a0 WithParams:(id)a1;
- (void)unFollowUser:(id)a0 completion:(id /* block */)a1;
- (void)trackReportButtonClickWithReportUid:(id)a0;
- (void)configWithEpisodeItem:(id)a0;
- (id)userFollowModel:(id)a0 secUserId:(id)a1;
- (void)trackMonitorFollowBgeinTime:(double)a0 withError:(id)a1 extra:(id)a2;
- (void)trackMonitorUnfollowBgeinTime:(double)a0 withError:(id)a1 extra:(id)a2;
- (void)trackHornorWallClickedWithEventName:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
