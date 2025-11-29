@class NSString, AWEShareContext;
@protocol AWEShareView;

@interface AWEShareDownloadImageChannel : AWEShareBaseChannel <AWEShareFunction>

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

- (void)setConfigModel:(id)a0;
- (void)shareWithCompletion:(id /* block */)a0;
- (id)shareImage;
- (void)configWithShareView:(id)a0;
- (id)defaultSmallIconInTheme:(id)a0;
- (id)defaultSmallIconBackgroundColorInTheme:(id)a0;
- (BOOL)showGenarateImageChannelWithContext:(id)a0;
- (void)trackQrCodeSave;
- (void)p_saveCutHybridViewToAlbumWithCompletion:(id /* block */)a0;
- (id)commonPreviewStat;
- (void)p_showToastWithSaveSuccess:(BOOL)a0;
- (id)title;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)a0;
- (id)defaultIcon;

@end
