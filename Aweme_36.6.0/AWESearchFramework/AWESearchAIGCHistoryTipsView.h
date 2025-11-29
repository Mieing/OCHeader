@class UILabel, UIView;

@interface AWESearchAIGCHistoryTipsView : AWESearchCachalotBaseCardView

@property (retain, nonatomic) UIView *tipsLeftLine;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *tipsRightLine;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)createUI;

@end
