@interface BUPersistenceOption : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL shouldRemoveAllObjectsOnMemoryWarning;
@property (nonatomic) BOOL shouldRemoveAllObjectsWhenEnteringBackground;
@property (nonatomic) BOOL supportNSCoding;
@property (nonatomic) BOOL supportLRU;
@property (nonatomic) unsigned long long capacityCount;
@property (nonatomic) unsigned long long capacitySize;

- (id)init;

@end
