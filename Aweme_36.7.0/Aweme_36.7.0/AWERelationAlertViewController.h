@class AWERelationAlertView, NSString, AWEVCDAlertModel, AWEAuthorizeStateManager;

@interface AWERelationAlertViewController : UIViewController <AWERelationAlertViewDelegate>

@property (retain, nonatomic) AWERelationAlertView *alertView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (retain, nonatomic) AWEVCDAlertModel *relationModel;
@property (retain, nonatomic) AWEAuthorizeStateManager *authorizeStateManager;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)agreeAction;
- (void)nextTimeAction;
- (id)initWithRelationModel:(id)a0 didShowBlock:(id /* block */)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
