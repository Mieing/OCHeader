@class NSString, NSData;

@interface BizAttrSyncBufferCacheItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long lastUpdateTime;
@property (retain, nonatomic) NSData *syncBuf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_lastUpdateTime;
+ (void)PBArrayAdd_syncBuf;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
