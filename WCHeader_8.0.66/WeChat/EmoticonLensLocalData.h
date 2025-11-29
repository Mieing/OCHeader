@class NSString, NSMutableArray;

@interface EmoticonLensLocalData : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *recentUsedLens;
@property (retain, nonatomic) NSMutableArray *allLens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_recentUsedLens;
+ (void)PBArrayAdd_allLens;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
