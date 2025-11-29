@class NSString, UIImageView, UIImage, MMImageBrowseView, SightIconView;
@protocol WCCardImageBrowserDelegate;

@interface WCCardImageBrowserViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) UIImageView *originView;
@property (nonatomic) BOOL needDeleteAction;
@property (nonatomic) BOOL needActionSheet;
@property (weak, nonatomic) id<WCCardImageBrowserDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) MMImageBrowseView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SightIconView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)onSetStatusBarFontBlack;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithImage:(id)a0;
- (void)configImage:(id)a0;
- (void)initView;
- (void)adjustImageViewRect;
- (void)setByOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originImage:(id)a1;
- (void)startPlayAnimation;
- (void)onOperate;
- (void)onSavedPhotosAlbum:(id)a0;
- (void)onSingleTapImageBrowseView;
- (void)singleOnIconView;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
