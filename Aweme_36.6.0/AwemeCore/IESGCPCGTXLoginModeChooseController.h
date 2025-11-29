@class NSString, NSMutableDictionary, UIView;
@protocol IESHYContainerProtocol, IESGCPCGTXLoginModeChoosePageDelegate;

@interface IESGCPCGTXLoginModeChooseController : UIViewController <IESHYHybridViewLifecycleProtocol, IESGCPCGTXLoginPageProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) NSMutableDictionary *lynxEventList;
@property (weak, nonatomic) id<IESGCPCGTXLoginModeChoosePageDelegate> delegate;
@property (copy, nonatomic) id /* block */ onTapBlankArea;
@property (copy, nonatomic) id /* block */ onLoadFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)_onBlankAreaClicked;
- (void)preloadLynxContent;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)show;

@end
