@class NSString, NSMutableArray;

@interface WSNumberRedPointList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *redPointArr;
@property (nonatomic) unsigned long long clearedNumSeq;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_redPointArr;
+ (void)PBArrayAdd_clearedNumSeq;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)clear:(unsigned long long)a0;
- (unsigned long long)count;
- (id)firstObject;
- (void)safeAddObject:(id)a0;
- (BOOL)insertRedPointInfo:(id)a0;
- (id)dictInfo;
- (void).cxx_destruct;

@end
