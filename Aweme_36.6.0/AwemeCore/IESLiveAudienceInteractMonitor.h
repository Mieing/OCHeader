@class NSDictionary, NSString;
@protocol IESLiveFullLinkMonitor, IESLiveAudienceInteractMonitorDataSource, IESLiveRoomService;

@interface IESLiveAudienceInteractMonitor : NSObject <IESLiveAudienceInteractMonitorProtocol>

@property (nonatomic) unsigned long long module;
@property (weak, nonatomic) id<IESLiveAudienceInteractMonitorDataSource> dataProvider;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSDictionary *samplingConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)baseParams;
- (void)didSetAttachingDIContext;
- (id)logTag;
- (id)audienceInteractMonitorSamplingConfig;
- (id)samplingServiceNameWithServiceName:(id)a0 key:(id)a1;
- (id)pr_paramsWithAPIPath:(id)a0 requestTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (id)samplingServiceNameWithServiceName:(id)a0 key:(id)a1 roleType:(unsigned long long)a2;
- (unsigned long long)fullLinkRoleTypeFromRoleType:(unsigned long long)a0;
- (void)monitorWithAPIPath:(id)a0 requestTime:(double)a1 response:(id)a2 error:(id)a3 extra:(id)a4;
- (void)monitorWithMessage:(id)a0 extra:(id)a1;
- (void)monitorBussinessWithEventType:(unsigned long long)a0 bussinessName:(id)a1 extra:(id)a2;
- (id)initWithModule:(unsigned long long)a0 dataProvider:(id)a1;
- (void)monitorWithAPIPath:(id)a0 roleType:(unsigned long long)a1 requestTime:(double)a2 response:(id)a3 error:(id)a4 extra:(id)a5;
- (void)monitorWithAPIPath:(id)a0 roleType:(unsigned long long)a1 roomID:(id)a2 requestTime:(double)a3 response:(id)a4 error:(id)a5 extra:(id)a6;
- (void).cxx_destruct;

@end
