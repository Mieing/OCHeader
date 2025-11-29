@class AWEModernFeedActionButton, NSString, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWEModernFeedAdLabelFeedbackView : UIView

@property (nonatomic) long long themeStyle;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *adLabelView;
@property (retain, nonatomic) UIImageView *arrowDownView;
@property (retain, nonatomic) AWEModernFeedActionButton *feedbackBtn;
@property (copy, nonatomic) id /* block */ trackFeedbackBtnTappedEventBlock;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (void)themeDidChange:(id)a0;
- (void)configUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
