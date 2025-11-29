@class NSString, NSMutableArray;

@interface MMLiveFollowItemInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *itemArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_itemArray;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
