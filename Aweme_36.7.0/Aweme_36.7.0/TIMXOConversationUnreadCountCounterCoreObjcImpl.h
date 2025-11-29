@class NSString, NSMutableDictionary, TIMXOConversationUnreadCountModel, TIMXSDKInstance;

@interface TIMXOConversationUnreadCountCounterCoreObjcImpl : NSObject <TIMXOConversationUnreadCountCounterCore, TIMXInstanceScopeSingleton> {
    NSMutableDictionary *_unreadMap;
    TIMXOConversationUnreadCountModel *_unreadCountModel;
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cidToUnreadCountDict;
- (id)unreadCounts;
- (void).cxx_destruct;
- (void)removeAll;
- (id)removeData:(id)a0;
- (id)initWithRootObject:(id)a0;
- (id)insertData:(id)a0;

@end
