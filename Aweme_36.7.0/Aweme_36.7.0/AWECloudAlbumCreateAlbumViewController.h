@class NSString, AWECloudAlbumCreateAlbumViewConfig, AWECloudAlbumCreateAlbumView, UIView;

@interface AWECloudAlbumCreateAlbumViewController : UIViewController <AWECloudAlbumCreateAlbumViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *accessibilityViewToback;
@property (retain, nonatomic) AWECloudAlbumCreateAlbumView *createAlbumView;
@property (retain, nonatomic) AWECloudAlbumCreateAlbumViewConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createAlbumViewIconImage;
- (id)createAlbumViewTitle;
- (id)createAlbumViewBtnTitle;
- (id)createAlbumViewNameContent;
- (id)createAlbumViewNamePlaceHolder;
- (BOOL)createAlbumViewBtnImageNeedShow;
- (void)createAlbumViewCloseBtnClicked;
- (void)createAlbumViewBottomBtnClickedWith:(id)a0;
- (void)textFieldTextChanged:(id)a0;
- (void)addTapGestureToView:(id)a0 withSelector:(SEL)a1;
- (void)showViewController;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissViewController;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)textFieldTextDidChange:(id)a0;

@end
