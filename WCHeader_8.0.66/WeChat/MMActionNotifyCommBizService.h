@class MMLRUCache, NSString;

@interface MMActionNotifyCommBizService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *notifyUUIDCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
