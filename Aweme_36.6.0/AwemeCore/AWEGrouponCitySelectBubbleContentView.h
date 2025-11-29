@class NSString, UIImageView, UILabel, UIButton;

@interface AWEGrouponCitySelectBubbleContentView : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ confirmBlk;
@property (copy, nonatomic) id /* block */ cancelBlk;

- (id)initWithTitle:(id)a0 confirmBlk:(id /* block */)a1 cancelBlk:(id /* block */)a2;
- (void).cxx_destruct;
- (void)cancel;
- (void)setupUI;
- (void)confirm;
- (void)setupLayout;

@end
