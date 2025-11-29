@class NSString, NSArray;

@interface MJMaterialCacheModel : NSObject <PBCoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *cacheItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_cacheItems;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithIdentifier:(id)a0 cacheItems:(id)a1;
- (void).cxx_destruct;

@end
