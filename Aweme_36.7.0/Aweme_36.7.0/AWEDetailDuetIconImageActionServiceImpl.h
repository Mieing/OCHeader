@class UIView, NSString, AWEDetailDuetViewModel;

@interface AWEDetailDuetIconImageActionServiceImpl : NSObject <AWEDetailIconImageActionService>

@property (retain, nonatomic) AWEDetailDuetViewModel *stateContext;
@property (retain, nonatomic) UIView *tapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStateContext:(id)a0;
- (void)clickActionWithActionSender:(id)a0;
- (void).cxx_destruct;

@end
