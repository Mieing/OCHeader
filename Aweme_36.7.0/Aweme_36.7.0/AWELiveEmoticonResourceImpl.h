@class NSArray, NSDictionary, NSString, NSCache;

@interface AWELiveEmoticonResourceImpl : NSObject <IESLiveEmoticonResource>

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) NSArray *hostEmoticonItems;
@property (retain, nonatomic) NSArray *quickEmoticonItems;
@property (retain, nonatomic) NSDictionary *emoticonTitleImageMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)interactiveEmotionResourcePathWithDisplayName:(id)a0;
- (id)customEmotionViewController;
- (id)customAddStickerNotifyName;
- (id)getIMInteractiveEmoticons;
- (id)emoticonItems;
- (id)imageWithEmojiIconName:(id)a0 imageScale:(double)a1;
- (id)imageWithEmojiTitle:(id)a0 imageScale:(double)a1;
- (id)quickReplyEmoticonItems;
- (void)startLoadFavoriteItems;
- (id)imageWithFilePath:(id)a0;
- (void)transferToCustomPreviewWithData:(id)a0;
- (void)collectVSCommentSelectedImage:(id)a0;
- (id)loadFaveriteStickerResource;
- (void)loadEmojiResource;
- (void)loadQuickEmojiResource;
- (id)plainTextFromAttributedText:(id)a0;
- (id)emoticonAttributedTextFromPlain:(id)a0 commonAttr:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
