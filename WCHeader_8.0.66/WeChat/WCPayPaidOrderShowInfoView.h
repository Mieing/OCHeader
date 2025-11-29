@class NSArray;
@protocol WCPayPaidOrderShowInfoViewDelegate;

@interface WCPayPaidOrderShowInfoView : UIView

@property (retain, nonatomic) NSArray *m_showArray;
@property (weak, nonatomic) id<WCPayPaidOrderShowInfoViewDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDelegate:(id)a0;
- (void)updateWithShowInfo:(id)a0;
- (void)onSingleTap:(id)a0;
- (void).cxx_destruct;

@end
