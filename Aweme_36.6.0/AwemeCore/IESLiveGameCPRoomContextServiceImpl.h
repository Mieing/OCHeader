@class NSString;

@interface IESLiveGameCPRoomContextServiceImpl : NSObject <IESGCPLiveRoomContextService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtra;
- (id)enterFrom;
- (id)enterMethod;
- (id)enterFromAdType;
- (id)enterTimestamp;
- (id)isOtherChannel;
- (id)rawAdParams;
- (id)livetypeFromScence;
- (BOOL)hasPromotionGames;
- (id)adID;
- (id)anchorID;
- (id)liveID;
- (id)anchorAvatar;
- (long long)roomUserCount;
- (id)adCardClickMethod;
- (id)roomDIContext;
- (id)anchorNick;
- (id)trackerContextParams;
- (long long)liveStayLimit;
- (long long)roomLikeCount;
- (BOOL)isFollowCurrentAnchor;
- (id)unifiedGameID;
- (id)anchorRoomPromotionSceneSub;
- (void)closeLiveRoom:(id)a0 trace:(id)a1 completion:(id /* block */)a2;
- (id)requestId;
- (long long)groupId;
- (BOOL)isAnchor;
- (long long)scene;
- (id)functionType;
- (BOOL)isAd;
- (id)roomID;
- (id)creativeID;

@end
