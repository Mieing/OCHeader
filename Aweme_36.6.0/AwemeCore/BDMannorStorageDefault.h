@class NSString, BDMannorStorageManger;

@interface BDMannorStorageDefault : NSObject

@property (retain, nonatomic) BDMannorStorageManger *nonDeletableCache;
@property (retain, nonatomic) BDMannorStorageManger *deletableCache;
@property (copy, nonatomic) NSString *nonDeletableCachePath;
@property (copy, nonatomic) NSString *deletableCachePath;

+ (id)deletableCache;
+ (id)nonDeletableCache;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
