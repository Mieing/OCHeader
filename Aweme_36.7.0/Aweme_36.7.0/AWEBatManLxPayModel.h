@class NSString, NSTimer, UIView, BDPUniqueID, UIViewController;
@protocol BDXViewContainerProtocol;

@interface AWEBatManLxPayModel : NSObject

@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *containerView;
@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *hiddenContainerView;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL hiddenSupport;
@property (copy, nonatomic) NSString *stage;

+ (void)lxModelStageEvent:(id)a0 operationType:(id)a1 msg:(id)a2;

- (void).cxx_destruct;

@end
