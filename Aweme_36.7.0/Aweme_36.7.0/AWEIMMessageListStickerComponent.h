@class NSString, AWEIMMessageConversation, AWEIMCustomGiphyUploadHandler;

@interface AWEIMMessageListStickerComponent : AWEIMComponentBase <AWEIMMessageListStickerInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMCustomGiphyUploadHandler *giphyUploadHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)addCurrentStickerAtCell:(id)a0;
- (void)addStickerWithGiphyMessage:(id)a0 trackInfos:(id)a1;
- (void)p_addStickerWithGiphyMessage:(id)a0 trackInfos:(id)a1;
- (void)p_addStickerWithShanMengMessage:(id)a0 trackInfos:(id)a1;
- (void).cxx_destruct;

@end
