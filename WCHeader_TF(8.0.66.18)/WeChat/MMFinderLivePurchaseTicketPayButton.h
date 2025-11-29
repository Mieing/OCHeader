@class MMUIImageView, NSString, UIColor, MMUILabel;

@interface MMFinderLivePurchaseTicketPayButton : MMUIButton

@property (retain, nonatomic) MMUILabel *leftLabel;
@property (retain, nonatomic) MMUIImageView *coinImageView;
@property (retain, nonatomic) MMUILabel *rightLabel;
@property (retain, nonatomic) NSString *rightText;
@property (retain, nonatomic) UIColor *labelColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRightText:(id)a0 labelColor:(id)a1;
- (void)layoutUI;
- (void)creatUI;
- (void).cxx_destruct;

@end
