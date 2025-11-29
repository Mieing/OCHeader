@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareQRCodeChannel : AWEShareBaseChannel <AWEShareItemDelegate, AWEShareFunction>

@property (nonatomic) BOOL usesTikCode;
@property (nonatomic) long long shareCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *shareType;
@property (readonly, weak, nonatomic) AWEShareContext *context;
@property (readonly, weak, nonatomic) id<AWEShareView> shareView;
@property (readonly, copy, nonatomic) NSString *trackingLabel;
@property (readonly, nonatomic) BOOL supportMultipleOperations;
@property (readonly, nonatomic, getter=isShareItemEnabled) BOOL shareItemEnabled;

+ (Class)aAWESharePrepareURLStageCommonAdapterClass;

- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)shareItem:(id)a0 willAppear:(BOOL)a1;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (id)smallWhiteIcon;
- (id)whiteIconBackgroundColor;
- (id)smallColoredIcon;
- (id)coloredIconBackgroundColorInTheme:(id)a0;
- (void)executeFunctionOperationWithCompletion:(id /* block */)a0;
- (void)functionWillDisplayWithIndexPath:(id)a0 isFirstShow:(BOOL)a1;
- (id)shareTitleFromSettings;
- (id)aAWESharePrepareURLStageCommonAdapter;
- (void)p_trackLiveShare;
- (id)shareEnterFrom;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
