@class NSData, NSString;

@interface CommonReliableSyncKeyBuff : MMObject <PBCoding>

@property (retain, nonatomic) NSData *syncKey;
@property (nonatomic) unsigned int syncKeyVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_syncKey;
+ (void)PBArrayAdd_syncKeyVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
