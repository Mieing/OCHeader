@class NSString, MMScrollView;
@protocol WCPayGPIntroViewControllerDelegate;

@interface WCPayGPIntroViewController : WCPayBaseViewController <ILinkEventExt>

@property (weak, nonatomic) id<WCPayGPIntroViewControllerDelegate> delegate;
@property (retain, nonatomic) MMScrollView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidBePoped:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)setupContentView;
- (void)leftBarButtonClick;
- (void)launchBtnClick;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
