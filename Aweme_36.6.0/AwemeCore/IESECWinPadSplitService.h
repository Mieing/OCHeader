@class IESECServiceProxy, IESECWinContext, NSString;
@protocol IESECWinOpportunityService;

@interface IESECWinPadSplitService : NSObject <IESECWinOpportunityProtocol, IESECWinPadSplitService>

@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (weak, nonatomic) IESECWinContext *context;
@property (nonatomic) BOOL isAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pageVC;
- (void).cxx_destruct;
- (void)startWork;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
