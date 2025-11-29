@class NSString;

@interface AWECampaignTaskReportManager : HTSService <AWECampaignTaskReportService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportTask:(id)a0 uniqueID:(id)a1 extra:(id)a2 completion:(id /* block */)a3;
- (void)reportTask:(id)a0 taskID:(id)a1 uniqueID:(id)a2 host:(id)a3 path:(id)a4 extra:(id)a5 completion:(id /* block */)a6;
- (void)trackLogWithKey:(id)a0 message:(id)a1;

@end
