@class AWEAwemeModel, NSString, AWEPaidTraceTool;

@interface AWEPaidStreamTrackPlugin : NSObject <AWEPaidStreamPlugin>

@property (retain, nonatomic) AWEPaidTraceTool *trackTool;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paidStreamWillStart:(id)a0;
- (void)paidStreamDidStop:(id)a0;
- (void)paidStreamDidClose:(id)a0;
- (void)paidStreamTrialDidStart:(id)a0;
- (void)paidStreamTrialDidStop:(id)a0;
- (void)paidStream:(id)a0 loadPaymentPageWithPayment:(id)a1 isSuccess:(BOOL)a2 paidAuthItem:(id)a3;
- (void)paidStream:(id)a0 didAcquirePaidAuthWithPaidAuthItems:(id)a1;
- (void)willExitPaymentPageWithPaidStream:(id)a0;
- (void)didExitPaymentPageWithPaidStream:(id)a0;
- (void)paidStream:(id)a0 willDisplayForBlockType:(unsigned long long)a1;
- (void)paidStream:(id)a0 didEndDisplayForBlockType:(unsigned long long)a1;
- (void)sendEventDidUpdateAuthWithAuthItems:(id)a0;
- (void)traceWithEventName:(id)a0 parameters:(id)a1;
- (void).cxx_destruct;

@end
