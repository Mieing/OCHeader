@class UILabel, UIButton, MMUIButton;
@protocol MultiTalkBeforeTalkingOperateViewDelegate;

@interface MultiTalkBeforeTalkingOperateView : UIView

@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_descriptionLabel;
@property (retain, nonatomic) UILabel *m_memberDescLabel;
@property (retain, nonatomic) UIButton *m_hangupButton;
@property (retain, nonatomic) UIButton *m_enterCallButton;
@property (retain, nonatomic) MMUIButton *m_minimizeButton;
@property (retain, nonatomic) MMUIButton *m_ignoreButton;
@property (nonatomic) BOOL isSupportIgnore;
@property (weak, nonatomic) id<MultiTalkBeforeTalkingOperateViewDelegate> m_delegate;

- (id)titleLabel;
- (id)minimizeButton;
- (id)descriptionLabel;
- (id)memberDescLabel;
- (id)hangupButton;
- (id)enterCallButton;
- (void)hideOperateView;
- (void)showOperateView;
- (void)updateTitle:(id)a0;
- (void)updateDelegate:(id)a0;
- (void)updateBeforeTalkingOtherMemberCount:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initTitleLabel;
- (void)initDecLabel;
- (void)initMemberDescLabel;
- (void)updateMemberDescLabel:(unsigned long long)a0;
- (void)initHangupButton;
- (void)initEnterCallButton;
- (void)layoutIgnoreButton;
- (void)layoutMinimizeButton;
- (void)onHangupButtonClick;
- (void)onEnterButtonClick;
- (void)onMinimizeButtonClick;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
