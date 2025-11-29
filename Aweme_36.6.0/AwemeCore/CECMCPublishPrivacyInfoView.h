@class UIButton, UIImageView, UILabel;

@interface CECMCPublishPrivacyInfoView : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) BOOL isSimpleStyle;
@property (nonatomic) BOOL isNewMoment;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)p_setup;
- (void)updateBackgroundColorWithIsInMomentText:(BOOL)a0;
- (id)initWithSimpleStyle:(BOOL)a0 isNewMoment:(BOOL)a1;
- (void)updateWithIconImage:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapAction;

@end
