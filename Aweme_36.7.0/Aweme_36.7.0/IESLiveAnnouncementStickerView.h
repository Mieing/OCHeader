@class IESLiveTagView, NSString, UILabel, UIView, UIButton;

@interface IESLiveAnnouncementStickerView : UIView <IESLiveAnnouncementStickerViewProtocol>

@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *subscribeCountLabel;
@property (retain, nonatomic) UILabel *subscribeContentLabel;
@property (retain, nonatomic) IESLiveTagView *subscribeButton;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL hasAppointment;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ dragBlock;
@property (copy, nonatomic) id /* block */ appointmentClickBlock;
@property (copy, nonatomic) id /* block */ updateNumberBlock;
@property (copy, nonatomic) id /* block */ showEditPanelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCloseButton;
- (void)setupCloseButton;
- (void)setupTapGesture;
- (void)layoutCloseButton;
- (void)layoutTimeLabel;
- (void)closeButtonDidTapped;
- (void)applyCornerRadius:(double)a0;
- (void)layoutSubscribeLabel;
- (void)updateAppointmentCount:(id)a0;
- (void)layoutDivideLine;
- (void)layoutSubscribeButton;
- (void)updateAppointmentButton:(BOOL)a0 hasLuckyMoney:(BOOL)a1 needShakeIcon:(BOOL)a2;
- (void)setupTimeLabel;
- (void)setupSubscribeLabel;
- (void)setupDivideLine;
- (void)setupSubscribeButton;
- (void)contentDidTapped;
- (void)subscribeButtonDidTapped;
- (id)initWithAnchor:(BOOL)a0 diContext:(id)a1;
- (void)updateDate:(id)a0 scheduleTime:(id)a1 fullText:(id)a2;
- (void).cxx_destruct;
- (void)setupView;
- (void)updateBackgroundColor:(id)a0;
- (void)setupLayout;

@end
