@class NSString, NSMutableArray;

@interface ShakeTvStorage : NSObject <PBCoding, NSCoding, NSCopying>

@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) int newCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_items;
+ (void)PBArrayAdd_newCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
