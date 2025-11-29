@class AWEIMQuoteMessageV2, NSString, AWECommentModel, AWEAwemeModel;

@interface AWEIMAwemeModelExternalRefContextProvider : NSObject <IESIMMessageExternalRefContextProvider>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEIMQuoteMessageV2 *quoteMessageV2;
@property (copy, nonatomic) NSString *replyUserID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *replyActionType;
@property (copy, nonatomic) id /* block */ didSendMessageBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAwemeModel:(id)a0;
- (id)p_displayNameOfReplyUser;
- (BOOL)isSupportMessageType:(long long)a0;
- (void)prepareForDataIfNeeded;
- (id)externalRefWithMessageType:(long long)a0;
- (void)p_configMinVersionIfNeededWithMessage:(id)a0;
- (BOOL)canBeQuoteReplied;
- (id)quoteHint;
- (id)quoteString;
- (void)prepareExternalContentForMessage:(id)a0;
- (void)didSendFirstMessageInChat;
- (id)initialAttributedTextWithInputVC:(id)a0;
- (void)chatVCDidDismiss;
- (id)extraSyncedExtWithMessageType:(long long)a0;
- (void).cxx_destruct;
- (id)coverURL;

@end
