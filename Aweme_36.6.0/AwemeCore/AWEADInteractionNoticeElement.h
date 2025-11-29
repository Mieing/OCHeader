@class NSString, UIView;
@protocol AWEAdAutoRenewNoticeBarView;

@interface AWEADInteractionNoticeElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIView<AWEAdAutoRenewNoticeBarView> *autoRenewNoticeBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;
+ (BOOL)shouldAppearWithData:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)paddingOfNextElement:(id)a0;
- (void)updateAutoRenewNoticeBarView;
- (void)adNoticeTrack:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (long long)noticeType;

@end
