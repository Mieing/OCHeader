@class BDPUniqueID, BDPGoldPyConfirmView;

@interface BDPGoldPyConfirmViewController : BDPBaseAlertViewController

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL isConfirmViewHide;
@property (retain, nonatomic) BDPGoldPyConfirmView *confirmView;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long type;

- (void)didClickClose;
- (void)didClickConfirm:(BOOL)a0;
- (id)popTypeString;
- (id)initWithUniqueID:(id)a0 goldNum:(unsigned long long)a1 info:(id)a2 type:(unsigned long long)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)alertView;

@end
