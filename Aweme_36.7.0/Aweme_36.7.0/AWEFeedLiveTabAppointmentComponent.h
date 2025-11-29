@class AppointmentData, NSString, _TtC16AWELiveSwiftImpl29AWEFeedLiveTabAppointmentView;

@interface AWEFeedLiveTabAppointmentComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabInsertAction, AWEFeedLiveTabViewControllerLifeCycleAction>

@property (retain, nonatomic) _TtC16AWELiveSwiftImpl29AWEFeedLiveTabAppointmentView *appointmentView;
@property (retain, nonatomic) AppointmentData *appointmentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentStatus;
- (void)feedLiveTabDidEnter:(id)a0;
- (void)setupAppointmentView;
- (void)insertSubComponentWithData:(id)a0 atIndex:(unsigned long long)a1;
- (void)trackModuleShow;
- (void)handleFollowUpVisitData:(id)a0;
- (void)updateComponentWith:(id)a0;
- (id)itemsWithVisitData:(id)a0;
- (id)appointmentItemWithVisitData:(id)a0;
- (void)bindService;
- (void).cxx_destruct;
- (id)init;
- (void)becomeInactive;

@end
