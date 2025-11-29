@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLivePreAnnouncementPanelViewNew : UIControl <IESLiveAnnouncementStickerViewProtocol>

@property (retain, nonatomic) UIView *dateTimeAccessibilityView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *subscribeView;
@property (retain, nonatomic) UIImageView *subscribeImageView;
@property (retain, nonatomic) UILabel *subscribeLabel;
@property (nonatomic) BOOL needShakeSubscribeImageView;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dragBlock;
@property (copy, nonatomic) id /* block */ appointmentClickBlock;
@property (copy, nonatomic) id /* block */ updateNumberBlock;
@property (copy, nonatomic) id /* block */ showEditPanelBlock;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL hasAppointment;
@property (nonatomic) struct CGPoint { double x; double y; } lastPosition;
@property (retain, nonatomic) UILabel *countLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithDIContext:(id)a0;
- (void)updateAppointmentCount:(id)a0;
- (void)updateAppointmentButton:(BOOL)a0 hasLuckyMoney:(BOOL)a1 needShakeIcon:(BOOL)a2;
- (id)initWithAnchor:(BOOL)a0 diContext:(id)a1;
- (void)updateDate:(id)a0 scheduleTime:(id)a1 fullText:(id)a2;
- (void)showEditPanelClick:(id)a0;
- (void)appointmentAction;
- (void)performRedPacketAnimation;
- (void).cxx_destruct;
- (void)dismissAction;
- (void)setupView;

@end
