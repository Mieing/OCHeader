@class NSString, AWEProgressLoadingView, AWEShareContext;
@protocol AWEShareView;

@interface AWESharePlatformChannel : AWEShareBaseChannel <AWEShareFunction>

@property (retain, nonatomic) AWEProgressLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long sharePlatform;
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

+ (id)channelWithType:(id)a0;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (id)platformRegistry;
+ (void)registerPlatform:(long long)a0 title:(id)a1 imageName:(id)a2 smallImageName:(id)a3;
+ (id)registryEntryForPlatform:(long long)a0;
+ (void)initialize;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallWhiteIcon;
- (id)whiteIconBackgroundColor;
- (id)smallColoredIcon;
- (id)coloredIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)commonPreviewStat;
- (id)shareGoodsItemImageName:(long long)a0;
- (void)trackQRCodeSave;
- (BOOL)feedLandscapeShareWithToken;
- (void)prepareBeforeSharing:(id /* block */)a0;
- (void)cleanUpDownloadedResources;
- (void)trackShareSuccess;
- (void)trackSystemShareIfNeeded;
- (BOOL)tryHandleFailure:(id)a0 completion:(id /* block */)a1;
- (void)trackShareFailure:(id)a0;
- (id)channelNameWithPlatform:(long long)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (void)finishWithResult:(unsigned long long)a0 error:(id)a1;
- (id)initWithPlatform:(long long)a0;
- (id)title;
- (void)appDidBecomeActive:(id)a0;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
