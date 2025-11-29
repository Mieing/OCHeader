@class EmoticonCustomManageAddLogic, NSString, MMUIViewController, SnsEmojiInfoObj;

@interface WCCommentBigEmoticonAddHelper : NSObject <IStoreEmotionSingleDownloadMgrExt, MMUIViewControllerDelegate, EmoticonCustomManageAddLogicDelegate>

@property (retain, nonatomic) EmoticonCustomManageAddLogic *addEmoticonLogic;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (weak, nonatomic) MMUIViewController *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadAndAddEmoticon;
- (void)addEmoticon;
- (void)startDownloadEmoticon;
- (void)dealloc;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (id)getViewController;
- (void).cxx_destruct;

@end
