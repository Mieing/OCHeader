@class IESLiveCloudCollaboratePerfModel, NSString;
@protocol IESLiveFullLinkMonitor;

@interface IESLiveCloudCollaborateMonitorImpl : NSObject <IESLiveCloudCollaborateMonitor>

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> monitor;
@property (retain, nonatomic) IESLiveCloudCollaboratePerfModel *perfModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)reportWithTraceName:(id)a0 step:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
