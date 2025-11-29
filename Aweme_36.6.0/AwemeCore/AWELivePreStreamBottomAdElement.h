@class UIView;

@interface AWELivePreStreamBottomAdElement : AWELiveLeftElement

@property (retain, nonatomic) UIView *adMannorBottomSlotView;

- (void)initializeElement;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)viewDidLoad;

@end
