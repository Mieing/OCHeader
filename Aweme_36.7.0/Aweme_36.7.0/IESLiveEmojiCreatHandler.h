@class HTSLiveEmojiTemplateGetResponse_Data, NSString, IESLiveImageCropApi, IESLivePopupItem, IESLiveSubscribeEmojiCreateView;
@protocol IESLiveSubscription, IESLiveEffectPlatformService;

@interface IESLiveEmojiCreatHandler : NSObject <IESLiveSubscribeEmojiCreateViewdelagate, IESLiveEmojiCreateAlertViewDelegate>

@property (retain, nonatomic) HTSLiveEmojiTemplateGetResponse_Data *model;
@property (retain, nonatomic) IESLiveSubscribeEmojiCreateView *emojiCreateView;
@property (retain, nonatomic) IESLivePopupItem *alertItem;
@property (retain, nonatomic) IESLivePopupItem *emojiCreateItem;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSString *authorId;
@property (copy, nonatomic) NSString *effectFilePath;
@property (copy, nonatomic) NSString *imageFilePath;
@property (copy, nonatomic) NSString *typeId;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (nonatomic) BOOL isFromRoom;
@property (retain, nonatomic) IESLiveImageCropApi *api;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (void)openPhotoAlbum;
- (void)tapCancelButton;
- (void)openEmojiCreatePageWithRequestPage:(id)a0 authorId:(id)a1 completionBlock:(id /* block */)a2;
- (void)p_openEmojiCreateView;
- (void)fetchEmojiTemplate;
- (void)trackLivevipSampleEmojiUpload;
- (void)closeEmojiCreatePanel;
- (void)trackSampleEmojiEditPageShow;
- (void)fetchEffectModel;
- (void)trackSampleEmojiPhotoUpload;
- (void)trackSampleEmojiPageShow;
- (void)handleImageWithBase64:(id)a0;
- (void)trackSampleEmojiPhotoClickWithClickType:(id)a0;
- (id)base64TransferImage:(id)a0;
- (void)tapAvatorButton;
- (id)cropImageWithImageWidth:(double)a0 convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 image:(id)a2;
- (void)openCamera;
- (void).cxx_destruct;

@end
