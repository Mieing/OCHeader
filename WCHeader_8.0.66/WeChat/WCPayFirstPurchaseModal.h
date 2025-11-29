@class NSString, UIImageView, UILabel, UIView, UIButton;
@protocol WCPayFirstPurchaseModalDelegate;

@interface WCPayFirstPurchaseModal : UIView

@property (weak, nonatomic) id<WCPayFirstPurchaseModalDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *leftBtnWrod;
@property (retain, nonatomic) NSString *rightBtnWrod;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *leftBtn;
@property (retain, nonatomic) UIButton *rightBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)initWithTitle:(id)a0;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapLeft;
- (void)onTapRight;
- (void)onTapOutSide;
- (void)dissmissView;
- (void)showInView;
- (void).cxx_destruct;

@end
