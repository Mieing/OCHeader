@interface HMDOCCollectionMonitor : NSObject

@property (nonatomic) unsigned long long elementCountThreshold;

+ (id)uploadCollectionException;
+ (id)collectionInfoFilePath;
+ (void)infoUpdateForContainer:(id)a0 containerType:(id)a1 object:(id)a2;
+ (void)removeCollectionObject:(id)a0;
+ (id)sharedInstance;

- (void)start:(unsigned long long)a0;

@end
