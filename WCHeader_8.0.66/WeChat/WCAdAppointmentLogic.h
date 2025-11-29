@class NSString, WCAdAppointmentInfo, WCAdConfirmHalfScreenBaseView;
@protocol WCAdAppointmentLogicDelegate;

@interface WCAdAppointmentLogic : WCAdvertiseOperationLogicBase <WCAdConfirmHalfScreenBaseViewDelegate>

@property (retain, nonatomic) WCAdAppointmentInfo *appointmentInfo;
@property (retain, nonatomic) WCAdConfirmHalfScreenBaseView *halfScreenView;
@property (weak, nonatomic) id<WCAdAppointmentLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppointmentInfo:(id)a0;
- (int)fetchAppointmentStatus;
- (void)showAppointmentConfirmViewForStatus:(int)a0 isNotice:(BOOL)a1;
- (void)onConfirmViewConfirmButtonClickWithConfirmInfo:(id)a0;
- (void)checkAppointmentStatusWithUxInfo:(id)a0;
- (void)submitAppointmentWithOpType:(int)a0 uxInfo:(id)a1 phoneNumber:(id)a2;
- (void)handleAppointmentRespWithOpType:(int)a0 isSuccess:(BOOL)a1 status:(int)a2;
- (void)postAppointmentStatusUpdateEvent:(int)a0;
- (void)updateAppointmentStatus:(int)a0;
- (BOOL)shouldAppointmentProgressContinuing;
- (void).cxx_destruct;

@end
