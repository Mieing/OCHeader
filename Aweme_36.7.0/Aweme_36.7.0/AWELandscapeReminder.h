@class NSAttributedString, NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWELandscapeReminder : UIView <AWERVLVReminderProcotol>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *reminderContainer;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIButton *jumpBtn;
@property (copy) id /* block */ jumpLabelBlock;
@property (nonatomic) BOOL needMixContinuePlayTip;
@property (nonatomic) BOOL isLockStatus;
@property (nonatomic) BOOL hasConfigUI;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) BOOL isMixVideoAndSlideEnable;
@property (nonatomic) double scaleRatios;
@property (nonatomic) unsigned long long viewType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configAppointmentUI;
- (void)configBackgroundUI;
- (void)configButtonUI;
- (void)updateNeedMixContinuePlayTip:(BOOL)a0 lockStatus:(BOOL)a1;
- (BOOL)fixUpdateLandscapeReminder;
- (void)configContinuePlayUIWithLockStatus:(BOOL)a0 forceUpdate:(BOOL)a1;
- (void)resetLabelLayout;
- (void)adjustTransform;
- (void)handleJumpTap;
- (BOOL)isReminderShowing;
- (void)updateReminderText:(id)a0 jumpTap:(id /* block */)a1;
- (void)updateReminderText:(id)a0 buttonTitle:(id)a1;
- (void)updateReminderText:(id)a0 buttonTitle:(id)a1 jumpTap:(id /* block */)a2;
- (void).cxx_destruct;
- (double)preferredWidth;
- (void)reset;

@end
