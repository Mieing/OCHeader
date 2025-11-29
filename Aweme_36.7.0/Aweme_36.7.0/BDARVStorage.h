@class NSString;
@protocol BDARVInnerStorage;

@interface BDARVStorage : NSObject <BDARVStorage>

@property (retain, nonatomic) id<BDARVInnerStorage> innerStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_userDefaults;

- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
