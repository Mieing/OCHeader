@class NSDictionary, NSString, WCTopicSearchActionLogic, CEmoticonWrap, StoreEmotionBatchEmojiDownLoadCgi, EmoticonSearchInMessagePanelReporter, EmoticonUploader;
@protocol EmoticonSearchViewControllerDelegate;

@interface NewEmoticonSearchViewController : WSHalfScreenWebSearchBaseViewController <EmoticonUploaderDelegate>

@property (retain, nonatomic) NSString *chatId;
@property (retain, nonatomic) WCTopicSearchActionLogic *shareActionLogic;
@property (nonatomic) unsigned int sourceScene;
@property (nonatomic) BOOL includeCustomEmoji;
@property (retain, nonatomic) CEmoticonWrap *selectedEmoticon;
@property (retain, nonatomic) StoreEmotionBatchEmojiDownLoadCgi *emojiDownloadCgi;
@property (retain, nonatomic) EmoticonUploader *emoticonUploader;
@property (retain, nonatomic) EmoticonSearchInMessagePanelReporter *reporter;
@property (nonatomic) unsigned long long selectEmoticonTimeStamp;
@property (retain, nonatomic) NSDictionary *selectEmoticonParams;
@property (nonatomic) BOOL bShowKeyboardTips;
@property (weak, nonatomic) id<EmoticonSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)expIfChangedBackgroundColor;

- (id)initWithCurrentTextAndCid:(id)a0 chatId:(id)a1 sourceScene:(unsigned int)a2 includeCustomEmoji:(BOOL)a3;
- (id)textfiledBackgroundColor;
- (id)baseBackgroundColor;
- (id)leftIconBgImageColor;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)onTextFieldChanged:(id)a0;
- (unsigned long long)searchScene;
- (unsigned long long)localJSBizType;
- (id)defaultNavTitle;
- (id)searchBarPlaceholder;
- (id)initedUrlParams;
- (BOOL)shouldSendSearchInputChangedEventDuringMultiStageInput;
- (BOOL)shouldMakeTextFieldAutoBecomFirstResponder;
- (void)onSetSearchTagResult:(id)a0;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)onEmoticonDownloaded:(id)a0;
- (BOOL)needCheckUpload;
- (void)checkAndUploadEmoticon;
- (void)startCdnUpload;
- (void)onEmoticonUploadSuccessWithEmoji:(id)a0 uploadInfo:(id)a1;
- (void)onEmoticonUploadFailWithUploadInfo:(id)a0 reason:(unsigned long long)a1 realMd5:(id)a2;
- (void)onSelectEmoticonFinished;
- (void)onSelectEmoticonFailed;
- (void)reportSendEmoticonWithSuccess:(BOOL)a0;
- (void)openDetailViewWithKeyword:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
