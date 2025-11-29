@class NSString, IESLiveEmojiTextParser, HTSLiveApi, IESLivePinCommentNode;
@protocol IESLiveRoomService, IESLiveDIContext, IESLivePinCommentAbilityDelegate;

@interface IESLivePinCommentAnswerAbility : NSObject <HTSLiveMessageSubscriber, IESLivePinCommentAbilityProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveDIContext> context;
@property (retain, nonatomic) HTSLiveApi *api;
@property (nonatomic) BOOL replyAndPinAB;
@property (retain, nonatomic) IESLivePinCommentNode *currentNodeToReply;
@property (nonatomic) unsigned long long currentActionType;
@property (nonatomic) BOOL isFromSpecialScreen;
@property (retain, nonatomic) IESLiveEmojiTextParser *emojiTextParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLivePinCommentAbilityDelegate> delegate;

- (id)initWithRoomModel:(id)a0 diContext:(id)a1;
- (void)updateNode:(id)a0 withHighlightItem:(id)a1;
- (id)createNodeWithMsgListNode:(id)a0;
- (BOOL)hasPinAuth;
- (void)pinCommentNode:(id)a0;
- (void)handleHighlightItem:(id)a0 withNode:(id)a1;
- (id)pinCommonFromHighlightItem:(id)a0;
- (void)unPinCommentNode:(id)a0;
- (double)preferHeightWithNode:(id)a0;
- (BOOL)isDuplicateNode:(id)a0 withOtherNode:(id)a1;
- (id)itemId:(id)a0;
- (void)injectTrackEventParams:(id)a0 withNode:(id)a1 forType:(long long)a2;
- (id)duplicateToastText;
- (BOOL)isValidHighlightItem:(id)a0;
- (void)didClickedActionSheetItemWithMsgListNode:(id)a0;
- (void)didClickedOnPinWithNode:(id)a0;
- (id)fetchAnswerParamsWithNode:(id)a0;
- (void)pinQACommentNode:(id)a0 actionType:(unsigned long long)a1 finish:(id /* block */)a2;
- (void)editPinnedCommentNode:(id)a0;
- (void)replyAndPinMessage:(id)a0;
- (BOOL)isLastestItem:(id)a0;
- (void)replyCommentAndPin:(id)a0 fromPin:(BOOL)a1;
- (void).cxx_destruct;
- (void)setup;
- (void)messageReceived:(id)a0;

@end
