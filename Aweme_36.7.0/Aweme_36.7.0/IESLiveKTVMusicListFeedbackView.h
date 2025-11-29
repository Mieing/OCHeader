@class UIColor, NSString, UILabel, UIView;

@interface IESLiveKTVMusicListFeedbackView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIView *contentContainerView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (retain, nonatomic) UIColor *baseColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ didClickFeedback;

- (void)p_setupSubviews;
- (void)p_feedbackTap;
- (id)initWithTitle:(id)a0 feedbackTitle:(id)a1 baseColor:(id)a2 highLightColor:(id)a3 scaleRatio:(long long)a4;
- (void).cxx_destruct;

@end
