@class NSString, IESLiveMessageListAdapterUpdater, AWEFormatLiveMessageList, NSMutableArray, AWEFormatLiveMessageListTextNode;

@interface AWEFormatLiveMessageListAdapterImpl : NSObject <IESLiveMessageListCellViewDelegate, IESLiveTableViewScrollDelegate, AWEFormatLiveMessageListAdapterInterface>

@property (retain, nonatomic) IESLiveMessageListAdapterUpdater *adapterUpdater;
@property (retain, nonatomic) AWEFormatLiveMessageList *listView;
@property (retain, nonatomic) NSMutableArray *nodeBuffer;
@property (nonatomic) BOOL enableUpdateDataSource;
@property (nonatomic) long long unreadMessageCount;
@property (retain, nonatomic) AWEFormatLiveMessageListTextNode *loadingNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)messageListView;
- (void)addSystemMessageNodeWithText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 matchText:(id)a2 linkAction:(id /* block */)a3;
- (void)addLoadingMessageNodeFromUser:(id)a0 prefixIcon:(id)a1 usernameTapHandler:(id /* block */)a2;
- (void)updateLoadingMessageNodeWithText:(id)a0 fromUser:(id)a1 prefixIcon:(id)a2 usernameTapHandler:(id /* block */)a3;
- (BOOL)isLoadingNodeShowing;
- (void)removeLoadingMessageNode;
- (void)addLocalMessageNodeWithText:(id)a0 fromUser:(id)a1 usernameTapHandler:(id /* block */)a2;
- (void)addRemoteMessageNodeWithText:(id)a0 fromUser:(id)a1 prefixIcon:(id)a2 usernameTapHandler:(id /* block */)a3;
- (void)refreshMessageList;
- (void)refreshMessageListWithAutoScroll:(BOOL)a0;
- (void)refreshMessageListOnlyShowingNodesWithCompletion:(id /* block */)a0;
- (void)updateMessageListWidth:(double)a0;
- (void)addRemoteReplyMessageWithModel:(id)a0 prefixIcon:(id)a1 userNameTapHandler:(id /* block */)a2 respNameTapHandler:(id /* block */)a3;
- (id)createLoadingView;
- (void)handleTapUnreadViewAction;
- (void)updateNodeSize:(id)a0 withWidth:(double)a1;
- (void)addUsernameTapAction:(id /* block */)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 node:(id)a2;
- (void)updateAttachmentIfNeed:(id)a0;
- (void)updateMessageNode:(id)a0 withText:(id)a1 fromUser:(id)a2 prefixIcon:(id)a3 usernameTapHandler:(id /* block */)a4;
- (void)addMessageNodeWithText:(id)a0 fromUser:(id)a1 prefixIcon:(id)a2 usernameTapHandler:(id /* block */)a3;
- (void)refreshMessageListWithNodes:(id)a0 autoScroll:(BOOL)a1;
- (void)updateMessageList;
- (void)updateUnreadCount:(long long)a0;
- (void)enableUpdateDataSource:(BOOL)a0;
- (BOOL)messageListViewContentFull;
- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })a0 node:(id)a1 cell:(id)a2;
- (void)longPressCellView:(id)a0 node:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)setup;
- (double)getTopMargin;

@end
