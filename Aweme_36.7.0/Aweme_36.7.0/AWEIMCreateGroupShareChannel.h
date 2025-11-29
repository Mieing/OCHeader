@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEIMCreateGroupShareChannel : AWEShareBaseChannel <AWEShareFunction>

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

+ (Class)aAFDServiceDOUYINInterestSocialAdapterClass;
+ (BOOL)p_isPlanB;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallWhiteIcon;
- (id)whiteIconBackgroundColor;
- (id)smallColoredIcon;
- (id)coloredIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (BOOL)prepareToShare;
- (id)aAFDServiceDOUYINInterestSocialAdapter;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
