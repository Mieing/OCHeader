@class NSString, MMImageBrowseView, UIImage;
@protocol CommonImageBrowserDelegate;

@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate> {
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
}

@property (retain, nonatomic) id m_singleTapOnNav;
@property (nonatomic) BOOL needDeleteAction;
@property (nonatomic) BOOL needActionSheet;
@property (weak, nonatomic) id<CommonImageBrowserDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)adjustImageViewRect;
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)addNvGestureRecognizer;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(BOOL)a0;
- (void)exitFullScreen;
- (void)initNavigationBar;
- (void)initImageView;
- (void)initView;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAppear;
- (id)initWithImage:(id)a0;
- (void)dealloc;
- (void)onSingleTapOnNavigationBar:(id)a0;
- (void)onOperate;
- (void)onSavedPhotosAlbum:(id)a0;
- (void)onSingleTapImageBrowseView;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
