@class SendAppMsgHandler, ForwardMessageLogicController, NSString;

@interface TingShareManager : NSObject <SendAppMsgHandleDelegate, WCCommitViewResultDelegate, ForwardMessageLogicDelegate>

@property (retain, nonatomic) SendAppMsgHandler *sendAppMsgHandler;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareThumbnailData:(id)a0;
- (void)loadShareThumbnailDataForUrl:(id)a0 completion:(id /* block */)a1;
- (BOOL)canShowFidnerSinger;
- (void)shareToFriend:(id)a0;
- (void)shareToMoment:(id)a0;
- (void)messageFromTingItem:(id)a0 completion:(id /* block */)a1;
- (void)shareToFriendWithTingItem:(id)a0 categoryItem:(id)a1;
- (void)shareToMomentWithTingItem:(id)a0 categoryItem:(id)a1;
- (void)shareToTextStateWithTingItem:(id)a0 commentInfo:(id)a1 viewController:(id)a2;
- (void)shareToFavouriteWithTingItem:(id)a0;
- (void)messageFromCategoryItem:(id)a0 completion:(id /* block */)a1;
- (id)messageFromCategoryItem:(id)a0 listenItem:(id)a1;
- (void)shareToFriendWithCategoryItem:(id)a0;
- (void)shareToMomentWithCategoryItem:(id)a0;
- (void)shareToFavouriteWithCategoryItem:(id)a0;
- (void)shareTingChatRoomToFriendWithCategoryItem:(id)a0 listenItem:(id)a1;
- (void)shareTingChatRoomForwardWithCategoryItem:(id)a0 listenItem:(id)a1 userName:(id)a2;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)OnSendAppMsgOKToContacts:(id)a0;
- (void)showSharePreConfirmToContact:(id)a0 tingItem:(id)a1 categoryItem:(id)a2 inView:(id)a3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
