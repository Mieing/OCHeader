@class EmojiInfoObj, NSString;

@interface EmoticonLiteAppSingleDownloadLogic : NSObject <IStoreEmotionSingleDownloadMgrExt>

@property (retain, nonatomic) EmojiInfoObj *emojiInfo;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDownloadWrap:(id)a0;
- (void)startDownload;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imagePath:(id)a1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void).cxx_destruct;

@end
