@class NSString, IESLiveAnnouncementApi;
@protocol IESLiveCalendarEventService;

@interface IESLiveAnnouncementServiceIMP : NSObject <IESLiveAnnouncementService>

@property (retain, nonatomic) id<IESLiveCalendarEventService> calendarService;
@property (retain, nonatomic) IESLiveAnnouncementApi *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)announcementsIsEmpty:(id /* block */)a0;
- (void)trackVideoLinkResultOnVideoToAnnouncement:(id)a0 linkStatus:(id)a1 entranceType:(long long)a2;
- (void)saveAnnouncementToCalendar:(double)a0 endTime:(double)a1 recurrenceWeekDays:(id)a2 completion:(id /* block */)a3;
- (void)sendMessageWithAnnouncementId:(id)a0 toGroups:(id)a1 completion:(id /* block */)a2;
- (void)sendMessageWithAnnouncementIds:(id)a0 source:(id)a1 toGroup:(id)a2;
- (void)makeLiveAppointmentWithParams:(id)a0 completion:(id /* block */)a1;
- (void)cancelLiveAppointmentWithParams:(id)a0 completion:(id /* block */)a1;
- (void)updateLiveAnnouncementStickerSwitchStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)publishAnnouncementWithUserID:(id)a0 announcementID:(id)a1 completion:(id /* block */)a2;
- (void)unpublishAnnouncementWithUserID:(id)a0 completion:(id /* block */)a1;
- (void)queryAnnouncementStatus:(id)a0 isCycle:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchAllAnnouncementsInfoWithCompletion:(id /* block */)a0;
- (void)openPanelWithConfig:(id)a0 hostVC:(id)a1 completion:(id /* block */)a2;
- (void)openPanelWithConfig:(id)a0 hostVC:(id)a1 viewModel:(id)a2 completion:(id /* block */)a3;
- (void)openSharePanelWithAnnouncement:(id)a0 isInLiveRoom:(BOOL)a1 source:(id)a2 diContext:(id)a3;
- (BOOL)announcementPageTypeIsValid:(id)a0;
- (void)setupViewModelContext:(id)a0 extra:(id)a1;
- (void)openListOrEditPanel:(id)a0 viewModel:(id)a1 forceOpenList:(BOOL)a2 completion:(id /* block */)a3;
- (void)openEditPanel:(id)a0 viewModel:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)openShareGroupOrEditPanel:(id)a0 viewModel:(id)a1 completion:(id /* block */)a2;
- (void)openSharePanelWithAnouncementID:(long long)a0 ViewModel:(id)a1;
- (void)openListPanel:(id)a0 viewModel:(id)a1 completion:(id /* block */)a2;
- (void)openShareGroupPanel:(id)a0 viewModel:(id)a1;
- (void)createAnnouncementToCalendarWithStartTime:(double)a0 endTime:(double)a1 recurrenceWeekDays:(id)a2 completion:(id /* block */)a3;
- (void)cancelAnnouncementFromCalendar:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
