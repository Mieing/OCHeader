@class WCPayPaidDetailFinderInfoViewData;
@protocol WCPayPaidDetailFinderInfoViewDelegate;

@interface WCPayPaidDetailFinderInfoView : UIView

@property (retain, nonatomic) WCPayPaidDetailFinderInfoViewData *viewData;
@property (weak, nonatomic) id<WCPayPaidDetailFinderInfoViewDelegate> delegate;

- (id)initFinderInfoViewWithViewData:(id)a0 delegate:(id)a1;
- (void)setupContentView;
- (void)coverBtnClick;
- (void).cxx_destruct;

@end
