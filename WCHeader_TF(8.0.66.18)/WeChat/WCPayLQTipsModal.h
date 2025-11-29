@class NSString, NSArray, UILabel, UIView, UIButton;
@protocol WCPayLQTipsModalDelegate;

@interface WCPayLQTipsModal : UIView

@property (weak, nonatomic) id<WCPayLQTipsModalDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *contentsView;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) BOOL isShowing;

- (id)initWithTitle:(id)a0 desc:(id)a1 contents:(id)a2;
- (void)updateWithTitle:(id)a0 desc:(id)a1 contents:(id)a2;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)onTapConfirmBtn;
- (void).cxx_destruct;

@end
