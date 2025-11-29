@class UILabel;

@interface IESLiveAudienceInteractiveInvitorView : UIView

@property (retain, nonatomic) UILabel *firstLabel;
@property (retain, nonatomic) UILabel *invitorLabel;
@property (retain, nonatomic) UILabel *secondLabel;

- (void)updateWithInvitor:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
