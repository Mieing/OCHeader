@class CAShapeLayer, AWEShareSaveAlertButtonModel, UIView, UILabel;

@interface AWEShareSaveAlertButton : UIButton

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) AWEShareSaveAlertButtonModel *buttonModel;
@property (retain, nonatomic) UILabel *subTitleLabel;

+ (id)buttonWithModel:(id)a0;

- (void)setupBinding;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)layoutSubviews;
- (void)setupUI;

@end
