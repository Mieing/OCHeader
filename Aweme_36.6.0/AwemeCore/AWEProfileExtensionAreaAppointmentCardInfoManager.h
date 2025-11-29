@class NSString, NSMutableSet, FMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWEProfileExtensionAreaAppointmentCardInfoManager : NSObject

@property (copy, nonatomic) NSString *dbPath;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) FMDatabase *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (retain, nonatomic) NSMutableSet *appointmentInfos;

+ (id)manager;

- (void)fetchAppointmentFromDB:(double)a0;
- (id)appointmentInfoWith:(id)a0 expiredTime:(double)a1;
- (void)insertAppointmentToDB:(id)a0 expiredTime:(double)a1;
- (void)fetchAppointmentWithTime:(double)a0;
- (void)checkShowAppointmentKey:(id)a0 expiredTime:(double)a1 completion:(id /* block */)a2;
- (void)consumptionWithAppointmentKey:(id)a0 expiredTime:(double)a1;
- (void).cxx_destruct;

@end
