@class UIColor, NSString;

@interface MultiTalkScreenSharingFileDetailViewController : FileDetailViewController <MultiTalkScreenSharingFileProtocol>

@property (nonatomic) long long fileEncryptType;
@property (retain, nonatomic) UIColor *previewBackgroundColor;
@property (nonatomic) BOOL automaticallyAdjustsWebScrollViewInsets;
@property (nonatomic) BOOL showsToastForSwitchingLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)updateWebScrollViewInset;
- (void)didInitPreview;
- (void)didLoadWebView;
- (void)checkFileEncryptType;
- (BOOL)findWKPasswordViewInView:(id)a0;
- (void)updateViewAndSubviews:(id)a0 withBackgroundColor:(id)a1;
- (void)showToastForSwitchingLandscapeIfNeeded;
- (void)showToastForSwitchingLandscape;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)a0;
- (id)filePathForScreenSharing;
- (void).cxx_destruct;

@end
