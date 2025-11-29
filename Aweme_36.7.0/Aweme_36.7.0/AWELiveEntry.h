@class NSString;

@interface AWELiveEntry : HTSService <AWELiveEntryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canEnterLiveRoom:(id)a0;
- (id)getCommentLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (BOOL)dylibIsLoaded;
- (BOOL)canPreviewLiveAutoEnter:(id)a0;
- (BOOL)isLiving;
- (BOOL)isInAudienceLiving;
- (BOOL)isInAnchorLiving;
- (BOOL)isInLiving;
- (BOOL)isInGroupLiveGame;
- (BOOL)isAudienceDuringLive;
- (BOOL)hasUsedLiveFunctionRecently;
- (BOOL)isEnableAudioCaptureInBackground;
- (BOOL)isScreenshotLiving;
- (void)prestreamLeave:(id)a0;
- (id)getLeaveLiveExtra;
- (id)getFeedLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)feedLiveMarkType;
- (unsigned long long)feedLiveMarkDisplayTypeWith:(id)a0;
- (void)updateLivePlayersEyesProtectState:(BOOL)a0 intensityValue:(double)a1;
- (void)storeFetchLiveModelOfFeedList:(id)a0 type:(long long)a1 referString:(id)a2;
- (void)storeLoadLiveModelOfFeedList:(id)a0 type:(long long)a1 referString:(id)a2;
- (void)hideLiveInappPush;
- (void)removeLiveGuideBubbleIfNeeded;
- (void)loadLiveDylibAndRunFeedReadyWithTask:(id /* block */)a0;
- (id)getLiveRoomFactory;
- (void)appendLiveFeedsWithEnterFrom:(id)a0 withFeedList:(id)a1 withTrackExtra:(id)a2;
- (void)readLiveFeedWithEnterFrom:(id)a0 withRoomID:(id)a1;
- (void)refreshPostUnreadRoomsWithEnterFrom:(id)a0;
- (void)quitInnerFeedPostUnreadRoomsWithEnterFrom:(id)a0;
- (BOOL)liveInnerFeedRerankOptEnable;
- (void)trackLiveTerminateData:(id)a0;
- (id)liveTerminateCacheData;
- (void)clearLiveTerminateCacheData;
- (void)trackLiveFirstRequestCommand:(id)a0;
- (id)getFeedLiveMarkViewNewTypeHeadWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getFeedLiveMarkViewNewTypeTitleWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getFeedLiveDecorationViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getLiveStatusIndicatorView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)liveFilterItemForEyesProtect;

@end
