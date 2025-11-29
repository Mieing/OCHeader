@class NSString, AWERVLVAppointmentViewModel, AWERVLVAppointmentView, BDImageView;

@interface AWERVLVAppointmentElement : AWERVVideoInfoBaseElement <AWERVLVAppointmentViewDelegate, DUXAlertDialogDelegate>

@property (retain, nonatomic) AWERVLVAppointmentView *appointmentView;
@property (retain, nonatomic) AWERVLVAppointmentViewModel *viewModel;
@property (retain, nonatomic) BDImageView *panelImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWETheaterViewControllerCommonAdapterClass;

- (void)viewDidDisposed;
- (id)aAWETheaterViewControllerCommonAdapter;
- (void)didTapAppointment;
- (void)trackAppointmentClick;
- (void)trackAppointmentClickResult:(long long)a0 formerAppointmentStatus:(BOOL)a1;
- (void)reportAppointment:(BOOL)a0;
- (void)showPushAlertIfNeed;
- (void)showUserNotificationAlert;
- (void)superViewDidAppear;
- (void)appointmentStatusDidChange;
- (void)trackAppointmentShow;
- (BOOL)appointmentAddVideoHallEntrance:(BOOL)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
