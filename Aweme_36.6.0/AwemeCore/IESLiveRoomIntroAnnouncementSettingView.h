@class UIView, UISwitch, UIImageView, RoomIntroAppointmentInfo, UILabel, UIButton;

@interface IESLiveRoomIntroAnnouncementSettingView : UIView

@property (retain, nonatomic) RoomIntroAppointmentInfo *announcementInfo;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *switchLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIView *divideLine;
@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UIImageView *guideImageView;
@property (copy, nonatomic) id /* block */ backDidTapped;

- (void)backButtonDidTapped;
- (void)switchViewValueDidChanged:(id)a0;
- (void)refreshWithAnnouncementInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 announcementInfo:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupLayout;

@end
