@class NSNumber, NSMutableDictionary, NSString;

@interface AWELiveDeepLinkRouterRegister : NSObject <AWEDeepLinkWorkFlowServiceDelegate, IESLiveSchemaPreviewService>

@property (retain, nonatomic) NSMutableDictionary *schemaPreviewData;
@property (retain, nonatomic) NSMutableDictionary *executeTasks;
@property (retain, nonatomic) NSNumber *notifiedRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)notifyPreLoadTaskExecute:(id)a0;
- (BOOL)registerWithRoomID:(id)a0 execute:(id /* block */)a1;
- (void).cxx_destruct;

@end
