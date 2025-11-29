@class MMTimerLabel, MMBadgeView, UILabel, MMUIButton, UIButton;
@protocol MultitalkSecondOperateViewDelegate;

@interface MultitalkSecondOperateView : UIView

@property (retain, nonatomic) MMUIButton *m_addMemberButton;
@property (retain, nonatomic) UIButton *m_shareScreenButton;
@property (retain, nonatomic) MMBadgeView *m_shareScreenBadgeView;
@property (retain, nonatomic) MMUIButton *m_minimizeButton;
@property (retain, nonatomic) MMTimerLabel *m_timerView;
@property (retain, nonatomic) UILabel *m_statusLabel;
@property (weak, nonatomic) id<MultitalkSecondOperateViewDelegate> m_delegate;

- (void)hideOperateView;
- (void)showOperateView;
- (void)updateAddMemberButtonHidden:(BOOL)a0;
- (void)updateShareScreenButtonHidden:(BOOL)a0;
- (void)updateShareScreenBadgeHidden:(BOOL)a0;
- (void)updateMinimizeButtonHidden:(BOOL)a0;
- (BOOL)getIsMinimizeButtonHidden;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initMinimizeButton;
- (void)initAddMemberButton;
- (void)initShareScreenButton;
- (void)initTimerView;
- (void)initStatusLabel;
- (void)onAddMemberButtonClick;
- (void)onShareScreenButtonClicked:(id)a0;
- (void)onMinimizeButtonClick;
- (void)updateStatusWording:(id)a0;
- (void)restartTimer;
- (long long)currentDuration;
- (void)updateTimerForIlinkToMultiTalk:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
