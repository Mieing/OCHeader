@class AWEIMLatestKindOfMessageInConversationComponent, NSString, HMDThreadSafeDictionary, NSMutableSet;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMUserBubbleComponent : AWEIMComponentBase <AWEIMUserBubbleInterface, AWEIMMessageListComponent>

@property (retain, nonatomic) NSMutableSet *requestingBubbleIDSet;
@property (retain, nonatomic) HMDThreadSafeDictionary *bubbleIDLastRequesteTimeDic;
@property (nonatomic) double requestInterval;
@property (copy, nonatomic) NSString *peerDecorateBtnMsgID;
@property (copy, nonatomic) NSString *selfDecorateBtnMsgID;
@property (retain, nonatomic) AWEIMLatestKindOfMessageInConversationComponent *latestBubbleComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)listViewModel;
- (void)tryRequestBubbleImageWithBubbleID:(id)a0;
- (void)updatePeerDecorateBtnMsgID:(id)a0;
- (void)updateSelfDecorateBtnMsgID:(id)a0;
- (BOOL)p_isTargetBubbleWithMessage:(id)a0;
- (BOOL)p_isTargetSelfBubbleWithMessage:(id)a0;
- (void)updateUserBubbleMsgWithBubbleID:(id)a0;
- (void).cxx_destruct;

@end
