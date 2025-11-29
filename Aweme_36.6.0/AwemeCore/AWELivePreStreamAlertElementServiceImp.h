@class AWELivePreStreamContext, UIViewController, NSString;
@protocol AWELivePreStreamAlertPriorityProtocol;

@interface AWELivePreStreamAlertElementServiceImp : NSObject <AWELivePreStreamAlertElementService>

@property (nonatomic) unsigned long long maxElementPriority;
@property (retain, nonatomic) id<AWELivePreStreamAlertPriorityProtocol> showElement;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AWELivePreStreamContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showElement:(id)a0;
- (id)initWithController:(id)a0 context:(id)a1;
- (void)makeBottomContainer:(id)a0 withOffset:(double)a1;
- (void)p_hidePreViewAllElements:(BOOL)a0 config:(unsigned long long)a1;
- (void)updateMaxPriority:(unsigned long long)a0 withCancle:(BOOL)a1;
- (BOOL)checkAlertElementIsShowing;
- (void).cxx_destruct;
- (BOOL)removeElement:(id)a0;
- (void)prepareForReuse;

@end
