@class NSString, TIMXSDKInstance;

@interface TIMXDBConversationORMRealTimeUpdateInitContext : NSObject <TIMXDBConversationORMRealTimeUpdateInitContextProtocol>

@property (copy, nonatomic) NSString *uid;
@property (readonly, weak, nonatomic) TIMXSDKInstance *r;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
