@class UILabel, UIView;
@protocol WCPayNFCCardDepositViewDelegate;

@interface WCPayNFCCardDepositView : UIView

@property (retain, nonatomic) UIView *labelView;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long depositAmount;
@property (nonatomic) BOOL isFreeFilled;
@property (weak, nonatomic) id<WCPayNFCCardDepositViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onTapDepositView:(id)a0;
- (void)updateView;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
