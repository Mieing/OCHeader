@class UIView;
@protocol AWEAdAutoRenewNoticeBarView;

@interface AWELivePreStreamProfileAdTipsElement : AWELiveLeftElement

@property (retain, nonatomic) UIView<AWEAdAutoRenewNoticeBarView> *autoRenewNoticeBarView;

- (void)initializeElement;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)viewDidDisposed;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)viewDidLoad;

@end
