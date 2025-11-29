@class NSString, NSMutableArray;

@interface WCFinderShowRelationArrayItem : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *array;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_array;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
