@class MMLRUCache, NSString;

@interface BrandCreationCenterMsgMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *notifyUUIDCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncWithActionNotifyData:(id)a0 uuid:(id)a1;
- (void).cxx_destruct;

@end
