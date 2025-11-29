@class NSString, NSDictionary, TIMXSDKInstance;

@interface TIMXDBConversationORMBatchUpdateInitContext : NSObject <TIMXDBConversationORMBatchUpdateInitContextProtocol>

@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, weak, nonatomic) TIMXSDKInstance *r;
@property (copy) NSDictionary *bizContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUid:(id)a0 rootObject:(id)a1;
- (void).cxx_destruct;

@end
