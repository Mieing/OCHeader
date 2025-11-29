@class NSString, NSMutableArray;

@interface FTSTopHitExtList : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *arrTopHit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_arrTopHit;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
