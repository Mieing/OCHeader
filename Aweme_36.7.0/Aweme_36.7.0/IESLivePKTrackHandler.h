@class NSArray, HTSEventContext, IESLiveRevenueInteractFullLinkMonitor, NSString;
@protocol IESLiveRoomService, IESLivePKGuestProvider, IESLivePKProvider;

@interface IESLivePKTrackHandler : NSObject <IESLiveRevenueInteractFullLinkMonitorDelegate>

@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (weak, nonatomic) id<IESLivePKGuestProvider> guestProvider;
@property (retain, nonatomic) NSArray *audienceWhiteList;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveRevenueInteractFullLinkMonitor *fullMonitor;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL isAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupMonitor;
- (id)commonTrackParams;
- (void)trackWithEvent:(id)a0 extra:(id)a1;
- (id)baseTrackParams;
- (id)playModel;
- (void)monitorWith:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorWith:(id)a0 extra:(id)a1;
- (void)monitorPKBusinessName:(id)a0 extra:(id)a1;
- (id)baseMonitorParams;
- (id)pkmodel;
- (id)initWithTrackContext:(id)a0 DIContext:(id)a1;
- (BOOL)showAddPlayCommonTrackParams:(id)a0;
- (BOOL)enableAudiencePresentWithEventID:(id)a0;
- (void).cxx_destruct;

@end
