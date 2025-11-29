@class NSString, UIView;
@protocol IRoamGuideConnectedDelegate;

@interface RoamConnectionGuideViewController : MMUIViewController <IRoamGuideConnectedDelegate>

@property (retain, nonatomic) UIView *uiContainerView;
@property (nonatomic) BOOL isPresentMode;
@property (weak, nonatomic) id<IRoamGuideConnectedDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithPresentMode;
- (void)viewDidLoad;
- (void)dismissController;
- (void)viewDidLayoutSubviews;
- (void)setupViews;
- (id)navigationBarBackgroundColor;
- (void)onCancel;
- (void)onGuideConnected;
- (void)dealloc;
- (void).cxx_destruct;

@end
