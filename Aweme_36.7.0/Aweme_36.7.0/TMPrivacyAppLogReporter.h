@class NSString, NSMutableDictionary;

@interface TMPrivacyAppLogReporter : NSObject <TSPKSubscriber>

@property (retain, nonatomic) NSMutableDictionary *permissionRequestCallMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (void)__loadAndReportHistoryPermissionCallResult;
- (id)handlePermissionRequestEvent:(id)a0;
- (id)handleAccessResultEvent:(id)a0;
- (id)handlePasteboardReadEvent:(id)a0;
- (id)handleTimonPipelineAPMReportEvent:(id)a0;
- (void)__savePermissionRequestCallResult:(id)a0 eventID:(id)a1;
- (void)__reportPermissionResultWithCallJson:(id)a0 key:(id)a1 permissionResult:(long long)a2;
- (void)__savePermissionRequestCallMapToStore;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;

@end
