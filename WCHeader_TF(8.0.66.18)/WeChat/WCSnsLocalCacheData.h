@class NSString, WCSnsOperation;

@interface WCSnsLocalCacheData : MMObject <PBCoding>

@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSString *itemId;
@property (retain, nonatomic) WCSnsOperation *snsOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_snsOperation;
+ (void)PBArrayAdd_itemId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
