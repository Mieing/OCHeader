@class UILabel, IESECHighlightButton, UIView;
@protocol IESECBuyNowNavDelegate;

@interface IESECBuyNowNavView : UIView

@property (retain, nonatomic) UIView *defaultView;
@property (retain, nonatomic) IESECHighlightButton *blackCloseButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<IESECBuyNowNavDelegate> delegate;
@property (nonatomic) BOOL isHalfPanel;
@property (nonatomic) double viewScale;
@property (nonatomic) double fontScale;
@property (nonatomic) double contentScale;

- (void)tapClose;
- (id)initWithDelegate:(id)a0 isHalfPanel:(BOOL)a1 fontScale:(double)a2 viewScale:(double)a3 fitPhoneWidth:(BOOL)a4;
- (void).cxx_destruct;
- (void)setupUI;

@end
