@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEIMShareChannel : AWEShareBaseChannel <AWEShareFunction>

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

+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEUGKitModuleDOUYINAdapterClass;
+ (id)additionalShareMaskArray;

- (id)normalImage;
- (id)shareImageURL;
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
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (id)makeItemWithStyle:(unsigned long long)a0 inView:(id)a1;
- (BOOL)prepareToShare;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEUGKitModuleDOUYINAdapter;
- (void)showShareListWithCompletion:(id /* block */)a0;
- (BOOL)isFromFeedLandscape;
- (BOOL)isFromLandscapeScene;
- (BOOL)checkIfSharedToSelf:(id)a0;
- (void)showShareList;
- (id)title;
- (id)smallImage;
- (unsigned long long)titleAlign;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
