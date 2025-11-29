@class AWEIMMessageConversation, NSString, AWEIMMessageListContinuousFoldRuleHelper, NSMutableSet, NSMutableArray;
@protocol IESIMMessageProtocol;

@interface AWEIMMessageListFoldContinuousMessagesComponent : AWEIMComponentBase <AWEIMMessageListFoldContinuousMessagesService>

@property (retain, nonatomic) id<IESIMMessageProtocol> firstRealTimeMsg;
@property (retain, nonatomic) NSMutableArray *lastTopMsgIDs;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSMutableSet *set;
@property (retain, nonatomic) AWEIMMessageListContinuousFoldRuleHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0;
- (long long)foldableLimit:(id)a0;
- (id)foldIDForMsg:(id)a0;
- (id)attributedTextWithGroup:(id)a0 hasBg:(BOOL)a1 foldAction:(id /* block */)a2;
- (id)updateFoldableDataForArray:(id)a0 direction:(unsigned long long)a1;
- (void)willDisplayHeaderView:(id)a0 group:(id)a1;
- (id)topGroupsWillBeRemovedWithOrigin:(id)a0;
- (id)findContinuousVMsInArray:(id)a0 recordMsgMap:(id)a1;
- (id)processSplitInfo:(id)a0;
- (BOOL)isRealTimeMsgModel:(id)a0;
- (void)resolveFoldGroupArray:(id)a0 inArray:(id)a1 direction:(unsigned long long)a2;
- (void)tryMergeFoldArray:(id)a0 inArray:(id)a1 direction:(unsigned long long)a2;
- (id)attr:(id)a0;
- (void).cxx_destruct;

@end
