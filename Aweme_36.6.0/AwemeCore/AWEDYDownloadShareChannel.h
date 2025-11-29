@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEDYDownloadShareChannel : AWEDownloadShareChannel <AWEShareFunction>

@property (nonatomic) long long shareCategory;
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

+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;

- (void)shareWithCompletion:(id /* block */)a0;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallOutlineIconInTheme:(id)a0;
- (id)outlineIconBackgroundColorInTheme:(id)a0;
- (void)precheckFunctionBeforeShareWithCompletion:(id /* block */)a0;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)showDownloadSuccessToast;
- (void)succeedWithDownloadResult:(id)a0;
- (void)showDownloadFailedToast;
- (BOOL)shouldShowShareSavePanel;
- (BOOL)ifUserHasAvailableSpace;
- (void)showStorageNotEnoughAlert:(id /* block */)a0;
- (void)popupAlertIfCellularWithCompletion:(id /* block */)a0;
- (BOOL)shouldForbidDownloadByVisibililyCheck:(id)a0;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
