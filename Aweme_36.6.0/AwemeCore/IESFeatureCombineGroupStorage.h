@class NSString, NSMutableArray;

@interface IESFeatureCombineGroupStorage : NSObject <NSCoding>

@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSMutableArray *storageArray;

+ (id)loadGroupStorageWithGroupName:(id)a0;
+ (BOOL)saveGroupStorage:(id)a0;
+ (id)getSaveKeyWithAppLaunchTime:(long long)a0 groupName:(id)a1;

- (id)initWithGroupName:(id)a0 maxCount:(long long)a1;
- (void)updateOneCombineFeatures:(id)a0 isNew:(BOOL)a1 isForce:(BOOL)a2;
- (BOOL)saveGroupStorage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
