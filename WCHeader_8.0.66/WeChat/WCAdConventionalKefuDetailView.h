@class MMHeadImageView, CContact, UILabel, ColorGradientView, WCAdCustomerServiceConfirmInfo;

@interface WCAdConventionalKefuDetailView : MMUIView

@property (retain, nonatomic) WCAdCustomerServiceConfirmInfo *confirmInfo;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL isInHalfScreenMode;
@property (retain, nonatomic) UILabel *kefuTitle;
@property (retain, nonatomic) UILabel *kefuDesc;
@property (retain, nonatomic) MMHeadImageView *kefuIconView;
@property (retain, nonatomic) UILabel *kefuNickname;
@property (retain, nonatomic) UILabel *kefuTailName;
@property (retain, nonatomic) ColorGradientView *bottomMaskView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confirmInfo:(id)a1 contact:(id)a2 isInHalfScreenMode:(BOOL)a3;
- (void)layoutSubviews;
- (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
- (id)generateComplicatedLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
- (void)setupUIContents;
- (void)layoutUIContents;
- (void)updateTailNameWithAppid:(id)a0;
- (void).cxx_destruct;

@end
