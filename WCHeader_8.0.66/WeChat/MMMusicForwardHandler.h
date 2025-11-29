@class SendAppMsgHandler, NSString, MMMusicVideoImageDownloader;
@protocol MMMusicForwardHandlerDelegate, MMMusicForwardHandlerDataSource;

@interface MMMusicForwardHandler : MMObject <SendAppMsgHandleDelegate, WCCommitViewResultDelegate>

@property (nonatomic) unsigned long long curShareSource;
@property (retain, nonatomic) SendAppMsgHandler *sendAppMsgHandler;
@property (retain, nonatomic) MMMusicVideoImageDownloader *imageDownLoader;
@property (weak, nonatomic) id<MMMusicForwardHandlerDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicForwardHandlerDelegate> delegate;
@property (nonatomic) unsigned long long pushedFromType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareToFriendsWithSource:(unsigned long long)a0 musicInfo:(id)a1 mvModel:(id)a2;
- (void)shareToFriendsWithSource:(unsigned long long)a0 musicInfo:(id)a1 mvModel:(id)a2 completion:(id /* block */)a3;
- (void)doShareToFriendsWithImageData:(id)a0 musicInfo:(id)a1;
- (void)shareToWcWithSource:(unsigned long long)a0 musicInfo:(id)a1 mvModel:(id)a2;
- (void)doShareToWCWithImageData:(id)a0 musicInfo:(id)a1;
- (void)OnSendAppMsgOKToContacts:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (id)genLogMusicInfo:(id)a0;
- (id)getCoverImageData:(id)a0;
- (id)getCoverImageDataWithDefault:(id)a0 musicInfo:(id)a1;
- (id)getMessageWrap:(id)a0 musicInfo:(id)a1;
- (id)getUpLoadTask:(id)a0 musicInfo:(id)a1;
- (void).cxx_destruct;

@end
