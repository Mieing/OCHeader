@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEIMAddCustomEmoticonShareChannel : AWEShareBaseChannel <AWEShareFunction>

@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, nonatomic) long long shareCategory;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackAddEmojiWithContext:(id)a0;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (BOOL)prepareToShare;
- (id)albumImagePickerViewController;
- (BOOL)canDownLoad;
- (BOOL)canShowDownLoadWithContext:(id)a0;
- (id)prepareDownloadOptions;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
