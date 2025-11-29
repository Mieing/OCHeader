@class UIView, NSString, AWEAwemeModel;

@interface AWEPlayletInteractionSummaryController : UIViewController <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIView *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentPlayletId;
- (id)lynxOriginCardParams:(id)a0;
- (id)summarySchema;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
