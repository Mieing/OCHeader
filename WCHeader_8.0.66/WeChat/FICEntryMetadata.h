@class NSString;

@interface FICEntryMetadata : NSObject <PBCoding>

@property (retain, nonatomic) NSString *entityUUID;
@property (nonatomic) unsigned int entityIndex;
@property (nonatomic) unsigned int LRUFactor;
@property (nonatomic) int entityUsedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_entityIndex;
+ (void)PBArrayAdd_LRUFactor;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
