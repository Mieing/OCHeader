@class NSString, NSDictionary;
@protocol BDPPrivacyRegulationViewDelegate;

@interface BDPPermissionAgreementConfirmController : UIViewController

@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *policies;
@property (nonatomic) BOOL isFromPrivacyConstract;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ constractLinkBlock;
@property (weak, nonatomic) id<BDPPrivacyRegulationViewDelegate> privacyDelegate;

- (id)initWithName:(id)a0 policies:(id)a1;
- (id)initPrivacyContractWithName:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
