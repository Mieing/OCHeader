@class LiveRoomImg, NSMutableArray, FinderLiveMicInfo;

@interface MMFinderLiveReplayMessageFrame : NSObject

@property (nonatomic) BOOL isMicInfoKeyframe;
@property (nonatomic) BOOL isLiveRoomImagesKeyframe;
@property (retain, nonatomic) FinderLiveMicInfo *liveMicInfo;
@property (retain, nonatomic) LiveRoomImg *liveRoomImages;
@property (retain, nonatomic) NSMutableArray *rewardMessages;
@property (retain, nonatomic) NSMutableArray *commentItems;

- (id)initWithFrameItem:(id)a0 liveTaskId:(id)a1 referenceLiveMicInfo:(id)a2 referenceLiveRoomImages:(id)a3;
- (void)appendCommentItemsWithMessageFrame:(id)a0;
- (void)mergeWithFrame:(id)a0;
- (id)fillerFrameFromCurrentKeyframe;
- (id)cloneWithCommentItemsPrepended:(id)a0;
- (void)initializeCommentItemsWithFrameItem:(id)a0 liveTaskId:(id)a1;
- (void)filterCommentDataItems:(id)a0;
- (void)initializeRewardMessagesWithMessageResponse:(id)a0;
- (id)computeLiveMicInfoWithReferenceLiveMicInfo:(id)a0 getLiveMsgResp:(id)a1;
- (id)cloneOfLiveMicInfo:(id)a0;
- (id)cloneOfFinderLiveMicPkInfo:(id)a0;
- (BOOL)handleAudienceConnectingMessage:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleAudienceDisconnectingMessage:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleAnchorConnectingInfo:(id)a0 forLiveMicInfo:(id)a1 sessionId:(id)a2;
- (BOOL)handleNewAnchorMicConnectingInfo:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleNewAnchorMicDisconnectingInfo:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleOpposingAnchorLiveRoomImagesChange:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleOpposingAudienceConnectingInfo:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleOpposingAudienceConnectingList:(id)a0 forLiveMicPkInfo:(id)a1;
- (BOOL)handleOpposingAudienceDisconnectingWithSessionId:(id)a0 forLiveMicInfo:(id)a1;
- (BOOL)handleOpposingAudienceDisconnectingWithSessionId:(id)a0 forLiveMicPkInfo:(id)a1;
- (id)computeLiveRoomImagesWithReferenceLiveRoomImages:(id)a0 differencingAppMsgList:(id)a1;
- (void).cxx_destruct;

@end
