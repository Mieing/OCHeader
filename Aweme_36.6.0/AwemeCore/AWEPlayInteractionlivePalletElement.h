@class NSString, UIView;
@protocol CMCLivePalletView;

@interface AWEPlayInteractionlivePalletElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<CMCLivePalletView> *livePalletView;
@property (copy, nonatomic) NSString *successStatus;
@property (copy, nonatomic) NSString *failReason;
@property (nonatomic) BOOL hasRequestLiveInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)updateLivePalletView;
- (void)updateHasRequestLiveInfo;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)splashDidClicked:(id)a0;
- (void)onLivePalletClicked;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
