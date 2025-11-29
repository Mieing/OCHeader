@class CJPayDyPayPlusXFollowBodyView, CJPayDyPayPlusXFreeLoginBodyView, CJPayDyPayPlusXSignPayBodyView, CJPayDyPayPlusXViewModel;

@interface CJPayDyPayPlusXBodyView : UIView

@property (retain, nonatomic) CJPayDyPayPlusXFreeLoginBodyView *freeLoginBodyView;
@property (retain, nonatomic) CJPayDyPayPlusXFollowBodyView *followBodyView;
@property (retain, nonatomic) CJPayDyPayPlusXSignPayBodyView *signPayBodyView;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;
@property (nonatomic) BOOL isQuality;

- (id)initWithIsQuality:(BOOL)a0;
- (void)updatePlusXFollowView:(id)a0;
- (void)updatePlusXSignPayView:(id)a0;
- (void)updatePlusXFreeLoginView:(id)a0;
- (void)changeUIBySwitchStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)a0;

@end
