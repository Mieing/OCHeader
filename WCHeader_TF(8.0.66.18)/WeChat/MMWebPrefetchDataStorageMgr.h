@class MemoryMappedKV, NSString;

@interface MMWebPrefetchDataStorageMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *slotMMKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
