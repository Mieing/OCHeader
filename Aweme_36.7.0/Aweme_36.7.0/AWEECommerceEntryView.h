@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWEECommerceEntryView : UIView <AWEECLabelActionProtocol>

@property (copy, nonatomic) id /* block */ tappedBlock;
@property (copy, nonatomic) id /* block */ overLengthBlock;
@property (retain, nonatomic) UIButton *containerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *header;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *arrow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adaptLargeFontTitle:(id)a0;
- (BOOL)adaptLargeFontMode;
- (void)viewTapped;
- (void)updateUIWithModel:(id)a0 action:(id /* block */)a1;
- (void)setOverLengthAction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
