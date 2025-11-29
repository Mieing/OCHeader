@class AWETheaterPageContext, AWETheaterRequestModel;

@interface AWETheaterDataController : AWEBaseDataController

@property (retain, nonatomic) AWETheaterRequestModel *requestModel;
@property (retain, nonatomic) AWETheaterPageContext *context;

+ (void)addTheaterEntranceWithIsNewVersion:(BOOL)a0 completion:(id /* block */)a1;
+ (void)updateLongVideoAppointmentStatus:(BOOL)a0 appointmentID:(id)a1 appointmentType:(long long)a2 completion:(id /* block */)a3;

- (void)requestWithCompletion:(id /* block */)a0;
- (void)refreshHistoryWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
