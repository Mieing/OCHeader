@class NSString, NSMutableArray;

@interface WALocationCacheInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *locationArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_locationArr;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
