@class UILabel, WCAdURLImageView, WCCanvasRandomLayoutEncorePickInfo;

@interface WCCanvasRandomPickCardBottomIntroduceView : MMUIView

@property (retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo;
@property (nonatomic) unsigned long long cardsRemainCount;
@property (retain, nonatomic) WCAdURLImageView *iconView;
@property (retain, nonatomic) UILabel *prefixLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *suffixLabel;

+ (struct CGSize { double x0; double x1; })calcIntroduceViewSizeWithEncoreInfo:(id)a0;
+ (struct CGSize { double x0; double x1; })calcLabelSizeWithFont:(id)a0 text:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 encoreInfo:(id)a1;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
