@class WAAppAuthInfoData, WAContact;

@interface WAAppAuthorizationPayViewController : ZZFLEXTableViewController

@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAAppAuthInfoData *authInfo;
@property (copy, nonatomic) id /* block */ updateAction;

- (id)initWithContact:(id)a0 authInfo:(id)a1;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)onReturn;
- (void)reloadPayVCUI;
- (void)switchAuthState:(unsigned int)a0 completeAction:(id /* block */)a1;
- (BOOL)judgeRiskControlInfo:(id)a0;
- (void).cxx_destruct;

@end
