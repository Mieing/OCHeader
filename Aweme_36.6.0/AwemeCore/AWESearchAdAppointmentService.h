@class NSString, AWEUILoadingView, AWEOriginalAdModel;

@interface AWESearchAdAppointmentService : HTSService <AWESearchAdAppointmentService>

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) long long sceneType;
@property (retain, nonatomic) AWEOriginalAdModel *adModel;
@property (nonatomic) BOOL didConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleAppointmentClickWithGroupID:(id)a0 appointmentID:(id)a1 sceneType:(long long)a2 adModel:(id)a3;
- (void)handleAppointmentNotificationForLynx:(id)a0;
- (void)handleAppointmentErrorWithAdModel:(id)a0 scene:(long long)a1 error:(id)a2;
- (void)handleAppointmentResult:(id)a0 scene:(long long)a1;
- (void)commonConfigsIfNeeded;
- (void)configAdModel:(id)a0;
- (void).cxx_destruct;
- (void)resetData;

@end
