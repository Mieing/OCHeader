@class MMUIView;
@protocol WCShareCardInvoiceCardHeaderDelegate;

@interface WCShareCardInvoiceHeaderView : WCShareCardBaseHeaderView

@property (retain, nonatomic) MMUIView *cardContentView;
@property (weak, nonatomic) id<WCShareCardInvoiceCardHeaderDelegate> delegate;

- (id)initWithViewWidth:(double)a0 withCardSourceData:(id)a1 cardStatus:(int)a2 isNeedHideAcceptBtn:(BOOL)a3 delegate:(id)a4;
- (void)initView;
- (void)initTicketCardContentView;
- (void)addLeftAndRightCornerToView:(id)a0;
- (void)onClickApplyBtn:(id)a0;
- (double)getRealHeight;
- (void).cxx_destruct;

@end
