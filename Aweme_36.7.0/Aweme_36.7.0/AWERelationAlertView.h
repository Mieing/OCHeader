@class CAGradientLayer, UIButton, AWEVCDNextActionButton, UILabel, AWEVCDAlertModel, UIView;
@protocol AWERelationAlertViewDelegate;

@interface AWERelationAlertView : UIView

@property (retain, nonatomic) AWEVCDAlertModel *model;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *bottomBlurView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIButton *nextTimeButton;
@property (retain, nonatomic) AWEVCDNextActionButton *agreeButton;
@property (weak, nonatomic) id<AWERelationAlertViewDelegate> delegate;

- (id)initWithAlertModel:(id)a0;
- (void)agreeAction;
- (void)nextTimeAction;
- (id)initWithRegualarBarModel:(id)a0;
- (void).cxx_destruct;
- (void)setText:(id)a0;
- (void)setupUI;

@end
