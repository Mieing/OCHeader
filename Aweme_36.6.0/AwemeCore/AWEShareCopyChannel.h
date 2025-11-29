@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareCopyChannel : AWEShareBaseChannel <AWEShareFunction, AWEShareItemDelegate>

@property (nonatomic) long long shareCategory;
@property (nonatomic) BOOL copied;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)didSelectShareItem:(id)a0;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallWhiteIcon;
- (id)whiteIconBackgroundColor;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (id)extImage;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)copyActivityLinkWithModel:(id)a0 completion:(id /* block */)a1;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)shareGroupCopyLinkSuccess;
- (BOOL)supportMultipleOperationsWithContext:(id)a0;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (id)bottomCenterImage;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (void)updateContextWithShortURL:(id)a0 compeletion:(id /* block */)a1;
- (BOOL)canShowCopyGroupLinkWithContext:(id)a0;
- (void)copyGroupLinkWithCompletion:(id /* block */)a0;
- (void)p_trackLiveShare;
- (void)p_trackEnterForeground;
- (void)showCopySuccessToast;
- (BOOL)shouldHideToast;
- (BOOL)isCommerceShowShareLink;
- (BOOL)share;
- (id)title;
- (void)dealloc;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
