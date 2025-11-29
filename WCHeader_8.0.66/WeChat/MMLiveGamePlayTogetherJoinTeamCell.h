@class MMUILabel, UITapGestureRecognizer, NSString, UILabel, MMUIButton, UIView;

@interface MMLiveGamePlayTogetherJoinTeamCell : MMLiveGamePlayTogetherTableViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *liveRequirementLabel;
@property (retain, nonatomic) UILabel *gameRequirementLabel;
@property (retain, nonatomic) UILabel *teamHeadCountLabel;
@property (retain, nonatomic) MMUIButton *teamupStartButton;
@property (retain, nonatomic) MMUILabel *teamupNextLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL enableTeamUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;
- (void)setupAction;
- (void)tapAction;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithItem:(id)a0;
- (void)onCellTeamUpStartButtonClicked;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
