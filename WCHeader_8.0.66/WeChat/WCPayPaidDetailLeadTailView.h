@class WCPayWebImageView, MMUIButton, UIImageView, NSString, WCPayPaidDetailLeadTailViewData, MMUILabel;
@protocol WCPayPaidDetailLeadTailViewDelegate;

@interface WCPayPaidDetailLeadTailView : UIView

@property (retain, nonatomic) WCPayPaidDetailLeadTailViewData *viewData;
@property (weak, nonatomic) id<WCPayPaidDetailLeadTailViewDelegate> delegate;
@property (retain, nonatomic) WCPayWebImageView *logoImgView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) MMUIButton *coverBtn;
@property (nonatomic) BOOL bIsSettled;
@property (retain, nonatomic) NSString *settledContent;

- (id)initWithLeadTailViewWithViewData:(id)a0 delegate:(id)a1;
- (void)refreshContentView;
- (void)coverBtnClick;
- (void)refreshViewAfterSettledResult:(BOOL)a0 resultContent:(id)a1;
- (void).cxx_destruct;

@end
