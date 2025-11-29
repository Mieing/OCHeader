@class UILabel, UIView;

@interface BTLDividingLineView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;

- (id)initWithTipsWording:(id)a0 font:(id)a1;
- (void)internalInitWithWording:(id)a0 font:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
