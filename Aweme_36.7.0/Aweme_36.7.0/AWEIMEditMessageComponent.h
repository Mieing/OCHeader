@class NSString;

@interface AWEIMEditMessageComponent : AWEIMComponentBase <AWEIMEditMessageActionService, AWEIMInputTextDraftAction, AWEIMCustomQuoteAction, AWEIMGroupBlockAction>

@property (copy, nonatomic) NSString *currentEditingMsgID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didEditContent:(id)a0 mentionUsers:(id)a1 editedMessageID:(id)a2;
- (BOOL)isMessageInEditing:(id)a0;
- (void)didClickEditMessage:(id)a0 conversation:(id)a1 context:(id)a2 cell:(id)a3;
- (void)didExitEditing;
- (void)didExitCustomQuote:(long long)a0;
- (void)didClickCloseCustomQuoteBtn:(long long)a0;
- (void)didRestoreInputTextDraft:(id)a0;
- (void)willChangeToBlockState;
- (BOOL)p_checkMsgEditCountLimit:(id)a0 showToast:(BOOL)a1;
- (BOOL)p_checkMsgEditTimeLimit:(id)a0 showToast:(BOOL)a1;
- (id)p_messageBaseViewController;
- (void)p_preventMessageListScroll:(BOOL)a0;
- (void)p_updateCellHighlight:(id)a0 isEditing:(BOOL)a1;
- (void)p_updateInputPlaceholder:(id)a0;
- (void)p_updateCellHighlightForMessageID:(id)a0 isEditing:(BOOL)a1;
- (void)p_trackDidEditMessage:(id)a0 conversation:(id)a1;
- (void).cxx_destruct;

@end
