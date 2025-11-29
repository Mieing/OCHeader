@class CJPayUnionBindCardHalfAccreditViewModel, CJPayUnionBindCardHalfAccreditView, NSString;

@interface CJPayUnionBindCardHalfAccreditViewController : CJPayHalfPageBaseViewController <CJPayBindCardPageProtocol>

@property (retain, nonatomic) CJPayUnionBindCardHalfAccreditView *accreditView;
@property (retain, nonatomic) CJPayUnionBindCardHalfAccreditViewModel *viewModel;
@property (copy, nonatomic) id /* block */ agreeCompletion;
@property (copy, nonatomic) id /* block */ protocolListClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (void)p_trackWithEventName:(id)a0 params:(id)a1;
- (void)createAssociatedModelWithParams:(id)a0;
- (void)p_gotoCardListVC;
- (id)p_buttonInfoActions:(id)a0;
- (void)p_unionSignRequest;
- (void)p_protocolClickBlock;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)back;

@end
