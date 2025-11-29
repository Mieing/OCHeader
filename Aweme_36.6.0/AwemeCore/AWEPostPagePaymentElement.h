@class AWECodeGenDouyinContentPayChargePermissionResponse, AWENewPublishTableCell;
@protocol ACCEditServiceProtocol;

@interface AWEPostPagePaymentElement : AWEPostPageCellElement

@property (retain, nonatomic) AWENewPublishTableCell *paymentCell;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *singlePaidPermissionModel;

+ (void)_aweLazyRegisterPostPage;
+ (id)type;

- (void)bindServices:(id)a0;
- (id)reeditService;
- (void)setupCell:(id)a0;
- (BOOL)forceReceiveEvents;
- (void)reloadPaymentItemIfNeeded:(id)a0;
- (void)fetchPermissionInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)service;
- (BOOL)isVisible;
- (BOOL)isEnabled;
- (void)viewDidLoad;
- (id)cell;
- (void)didSelect;

@end
