@class UIView, ImageMessageCellView, NSArray, NSString, CMessageWrap, UIImageView, WCImageView, UIViewController;

@interface PeekImageViewController : UIViewController <WCFacadeExt, IDownloadImageExt, IMsgExt, WCForceTouchPopProtocol> {
    CMessageWrap *_msgWrap;
}

@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) NSArray *previewActions;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) WCImageView *wcImageView;
@property (weak, nonatomic) ImageMessageCellView *imgCellView;
@property (weak, nonatomic) UIViewController *previewFromController;
@property (weak, nonatomic) UIView *previewSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageCellView:(id)a0 fromController:(id)a1;
- (id)initWithWCImageView:(id)a0 fromController:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reloadImage;
- (void)startDownloadImg:(BOOL)a0;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)OnDownloadImageOk:(id)a0;
- (void)OnDownloadImageFail:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (BOOL)canPop;
- (void)commitViewController;
- (id)previewActionItems;
- (void).cxx_destruct;

@end
