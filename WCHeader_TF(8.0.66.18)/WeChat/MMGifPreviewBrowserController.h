@class NSString, UIImageView, MMGifPreviewBrowserView, UILabel, MMAsset, UIButton;
@protocol MMImagePickerControlCenter, MMImagePickerManagerDelegate;

@interface MMGifPreviewBrowserController : MMUIViewController <MMAssetPickerBrowserViewDelegate> {
    UIImageView *m_bottomBar;
    UIButton *m_sendButton;
    UILabel *m_fileSizeLabel;
    MMGifPreviewBrowserView *m_gifBrowser;
    NSString *m_finishWording;
}

@property (weak, nonatomic) id<MMImagePickerControlCenter> controlCenter;
@property (weak, nonatomic) id<MMImagePickerManagerDelegate> delegate;
@property (retain, nonatomic) MMAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeInteractivePoped;
- (void)initGifView;
- (void)initBottomBar;
- (void)hideToolBar:(BOOL)a0;
- (void)OnCancel:(id)a0;
- (void)OnSend:(id)a0;
- (void)onAssetBrowserViewSingleTap:(id)a0;
- (void)onAssetBrowserViewLoadFinished:(id)a0;
- (void).cxx_destruct;

@end
