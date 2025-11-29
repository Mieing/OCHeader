@class HTSEventContext, NSString, IESLiveRevenueInteractFullLinkMonitor;
@protocol IESLiveRevenueInteractLinkerProvider, IESLivePKGuestProvider;

@interface IESLiveRevenueInteractTrackHandler : NSObject <IESLiveRevenueInteractFullLinkMonitorDelegate>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveRevenueInteractFullLinkMonitor *fullLinkMonitor;
@property (weak, nonatomic) id<IESLiveRevenueInteractLinkerProvider> provider;
@property (weak, nonatomic) id<IESLivePKGuestProvider> guestProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 extra:(id)a1;
- (void)setupMonitor;
- (id)baseTrackParams;
- (void)monitorResponse:(id)a0 error:(id)a1 apiRequestTime:(double)a2 path:(id)a3 extra:(id)a4;
- (void)monitorMessage:(id)a0 extra:(id)a1;
- (void)monitorBusinessName:(id)a0 extra:(id)a1;
- (id)baseMonitorParams;
- (id)initWithTrackContext:(id)a0 diContext:(id)a1;
- (id)linkerStatusStr;
- (id)rtcStatusStr;
- (BOOL)showAddPlayCommonTrackParams:(id)a0;
- (id)trackParamsForAnchor;
- (id)trackParamsForAudience;
- (id)baseTrackParamsForCommon;
- (id)trackParamsForAnchorByRD;
- (void)switchValueForDurType:(id)a0;
- (void).cxx_destruct;

@end
