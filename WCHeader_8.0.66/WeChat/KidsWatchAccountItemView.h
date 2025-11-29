@class MMUILabel, KidsAcctInfo, CAShapeLayer, MMHeadImageView;

@interface KidsWatchAccountItemView : UIControl

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nicknameLabel;
@property (retain, nonatomic) MMUILabel *deviceLabel;
@property (retain, nonatomic) CAShapeLayer *dotLayer;
@property (retain, nonatomic) MMUILabel *statusLabel;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) KidsAcctInfo *accountInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;

@end
