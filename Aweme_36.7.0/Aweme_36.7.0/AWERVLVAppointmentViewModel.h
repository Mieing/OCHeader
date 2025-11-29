@class AWERVDetailPageContext, AWELVideoAppointmentInfoModel, AWEAwemeModel;

@interface AWERVLVAppointmentViewModel : NSObject

@property (nonatomic) BOOL isRequesting;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (weak, nonatomic) AWERVDetailPageContext *currentContext;
@property (retain, nonatomic) AWELVideoAppointmentInfoModel *appointmentInfo;

+ (void)reportAppointmentStatusChange:(id)a0 completion:(id /* block */)a1;
+ (id)appointmentTime:(id)a0;
+ (BOOL)shouldShowAppointmentWithModel:(id)a0;
+ (BOOL)isHitAppointmentTime:(id)a0;
+ (void)updateModel:(id)a0 isAppointed:(BOOL)a1;
+ (void)reportAppointmentStatus:(BOOL)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)numberWithFloat:(double)a0 minimuFractionDigits:(unsigned long long)a1 maximumFractionDigits:(unsigned long long)a2 minimumIntegerDigits:(unsigned long long)a3 maximumeIntegerDigits:(unsigned long long)a4;

- (id)appointmentTime;
- (id)countToString;
- (BOOL)isAppointmentInfo;
- (void)reportAppointmentStatusChange:(id /* block */)a0;
- (void).cxx_destruct;

@end
