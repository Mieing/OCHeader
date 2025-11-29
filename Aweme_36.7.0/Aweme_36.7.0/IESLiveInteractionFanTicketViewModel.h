@class IESLiveInteractionEmojiModel, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IESLiveInteractionFanTicketDelegate;

@interface IESLiveInteractionFanTicketViewModel : NSObject <IESLiveInteractionEmojiActions>

@property (nonatomic) BOOL isIdle;
@property (retain, nonatomic) NSMutableArray *cachedNodes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) IESLiveInteractionEmojiModel *thankEmojiModel;
@property (nonatomic) long long animationType;
@property (weak, nonatomic) id<IESLiveInteractionFanTicketDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didSendEmoji:(id)a0 fromUserID:(id)a1 toUserID:(id)a2;
- (void)updateFanticket:(id)a0 nodeBuilder:(id /* block */)a1;
- (void)updateFanticket:(id)a0 quickInteract:(id)a1;
- (void)trackQuickReturnGiftShowWithToUserID:(id)a0 isClicked:(BOOL)a1;
- (void)sendThankEmojiWithToUserID:(id)a0;
- (id)getLastCachedNode;
- (void)doFanticketAnimationWithNode:(id)a0;
- (BOOL)enableQuickInteract;
- (void)trackQuickThankShowWithSendGiftUserID:(id)a0;
- (id)initWithDelegate:(id)a0 animationType:(long long)a1 diContext:(id)a2;
- (void)didFanticketUpdateFinish;
- (void)clearCachedThankNodeWithReceivedGiftUserID:(id)a0 thankedUserID:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (BOOL)isAnimating;

@end
