@class NSString, UILabel, UIView, UIButton;
@protocol WCPayLQTTipsModalDelegate;

@interface WCPayLQTTipsModal : UIView

@property (weak, nonatomic) id<WCPayLQTTipsModalDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithTitle:(id)a0 content:(id)a1 delegate:(id)a2;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapConfirm;
- (void)dissmissView;
- (void)showInView;
- (void).cxx_destruct;

@end
