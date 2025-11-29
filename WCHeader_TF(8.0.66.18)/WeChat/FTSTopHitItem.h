@class NSString, NSMutableArray;

@interface FTSTopHitItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSMutableArray *arrTopHitValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_searchText;
+ (void)PBArrayAdd_arrTopHitValue;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
