@class IESLiveRebornGiftAnimationNode, HTSEventContext, IESLiveTogetherSlotMethodParamModel, NSString, IESLiveLynxAssetPlayer;
@protocol IESLiveRoomService, IESLiveGiftPlayerDelegate;

@interface IESLiveSendTogetherGiftPlayer : NSObject <IESLiveLynxAssetPlayerDelegate>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveLynxAssetPlayer *lynxAssetPlayer;
@property (retain, nonatomic) IESLiveTogetherSlotMethodParamModel *slotModel;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNode *node;
@property (nonatomic) BOOL useNewMessageData;
@property (weak, nonatomic) id<IESLiveGiftPlayerDelegate> delegate;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithTrackContext:(id)a0;
- (void)closePlayer;
- (unsigned long long)lynxPlayingTogetherNodeCountWithAssetID:(id)a0;
- (void)playSendTogetherAssetWith:(id)a0 playCompleteWithStats:(id /* block */)a1;
- (BOOL)nodeMatchCurrentTogetherAsset:(id)a0;
- (void)updateAssetSlotInfo:(id)a0;
- (BOOL)slotIsFull;
- (BOOL)fillAssetSlotWithNode:(id)a0;
- (void)updateSendTogetherAssetWith:(id)a0 waitingCount:(unsigned long long)a1 waitingAssets:(id)a2;
- (void)lynxAssetFinishedFor:(id)a0 error:(id)a1;
- (id)senderStructWithNode:(id)a0;
- (id)newSenderStructWithNode:(id)a0;
- (id)findMatchSlotModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;

@end
