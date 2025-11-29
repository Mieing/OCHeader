@class UIStackView, NSString, LOTAnimationView, UIImageView, UILabel, UIView, AWEInteractionAppointmentModel;
@protocol ACCStickerContainerProtocol;

@interface ACCLongVideoAppointmentStickerView : UIView <ACCAppointStickerViewProtocol, ACCStickerContentProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIStackView *verticalContainerStackView;
@property (retain, nonatomic) UIStackView *timeAndAppointmentStackView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *verticalLineLabel;
@property (retain, nonatomic) UILabel *appointmentLabel;
@property (retain, nonatomic) LOTAnimationView *iconAnimationView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *accessibilityView;
@property (copy, nonatomic) NSString *accessibilityTimeString;
@property (retain, nonatomic) AWEInteractionAppointmentModel *stickerInfo;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ coordinateDidChange;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (void)configUIWithModel:(id)a0;
- (id)initWithStickerModel:(id)a0;
- (id)generateTimeDescription;
- (id)generatePingFangFont:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })appointmentButtonFrame;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setupUI;

@end
