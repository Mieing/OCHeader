@class NSString, DUXButton, AWEIMChatRecommendVideoHorizontalFlowLayout, NSIndexPath;

@interface AWEIMChatRecommendVideoHorizontalContentView : AWEIMChatRecommendVideoContentView <AWEIMChatRecVideoHorizontalFlowLayoutDelegate>

@property (weak, nonatomic) AWEIMChatRecommendVideoHorizontalFlowLayout *flowLayout;
@property (copy, nonatomic) NSIndexPath *presentingIndexPath;
@property (retain, nonatomic) DUXButton *sendButton;
@property (retain, nonatomic) DUXButton *gotoChatButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showGotoChatButton;
- (id)centerCell;
- (void)awemeDidSentAtIndexPath:(id)a0;
- (double)cellRadius;
- (void)p_sendButtonClicked:(id)a0;
- (void)p_gotoChatButtonClicked:(id)a0;
- (id)p_getCenterIndexPath;
- (void)p_didEndScroll;
- (void)showSendButton;
- (void)flowLayout:(id)a0 willAutoScrollToIndexPath:(id)a1;
- (void)p_setupUI;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)scrollToIndexPath:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)didResignActive;
- (Class)cellClass;

@end
